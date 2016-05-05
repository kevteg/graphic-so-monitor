#include "engi.h"
engi::engi(int argc, char *argv[]){
  error_message = "No existe ese comando";
  error = false;
  command = "";
  external = "";

  if(argc < 2){
    error = true;
    error_message = "Debe especificar un comando";
  }else
      command = argv[1];
      if(argc == 3)
        external = argv[2];
}
string engi::execute(){
  string execution = "Error: " + error_message;
  if(command == "--kernel-version")
    execution = kernel_version();
  else if(command == "--running-processes")
    execution = running_processes();
  else if(command == "--mem-total")
    execution = mem_total();
  else if(command == "--mem-total-free")
    execution = mem_total_free();
  else if(command == "--mem-swap")
    execution = mem_swap();
  else if(command == "--mem-swap-free")
    execution = mem_swap_free();
  else if(command == "--disk-list")
    execution = disk_list();
  else if(command == "--partitions-list")
    execution = partitions_list();
  else if(command == "--net-list")
    execution = net_list();
  else if(command == "--net-list-ip")
    execution = net_list_ip();
  else if(command == "--disk-space")
    execution = disk_space();
  else if(command == "--current-user")
    execution = current_user();
  else if(command == "--date-time")
    execution = date_time();
  else if(command == "--uptime")
    execution = uptime();
  else if(command == "--ext")
    execution = exec(external.c_str());
  else if(command == "--pid"){
    string com =  "ps -ef | awk '$NF~\"" + external + "\"{print $2}'";
    execution = exec(com.c_str());
  }else if(command == "--kill"){
    string com =  "ps aux | grep -i " + external + " | awk {'print $2'} | xargs kill -9";
    execution = exec(com.c_str());
  }

  return execution;
}


string engi::kernel_version(){
	string return_value;
  #ifdef __linux__
    return_value = exec("uname -r");
  #elif _WIN32
    return_value = exec("ver");
  #endif
  return return_value;
}

string engi::running_processes(){
  string return_value;
  #ifdef __linux__
    return_value = exec("ps -ax --no-headers | wc -l");
  #elif _WIN32
    return_value = exec("tasklist | find /c \"KB\" ");
  #endif
  return return_value;
}

string engi::mem_total(){
  std::ostringstream strs;
  #ifdef __linux__
    double ngb = stod(exec("cat /proc/meminfo | grep MemTotal | grep -Eo '[0-9]{0,9}'"))/1024/1024;
  #elif _WIN32
    double ngb = stod(exec("wmic computersystem get TotalPhysicalMemory | findstr /R /I /C:\"^[1-9].*\""))/1024/1024/1024;
  #endif
  strs << ngb;
  return strs.str() + "GB";
}
string engi::mem_total_free(){
  std::ostringstream strs;
  #ifdef __linux__
    double ngb = stod(exec("cat /proc/meminfo | grep MemAvailable | grep -Eo '[0-9]{0,9}'"))/1024/1024;
  #elif _WIN32
    double ngb = stod(exec("wmic os get freephysicalmemory | findstr /R /I /C:\"^[1-9].*\""))/1024/1024;//según vi en taskmgr es así
  #endif
  strs << ngb;
  return strs.str() + "GB";
}
string engi::mem_swap(){
  std::ostringstream strs;
  #ifdef __linux__
    double ngb = stod(exec("cat /proc/meminfo | grep SwapTotal | grep -Eo '[0-9]{0,9}'"))/1024/1024;
  #elif _WIN32
    double ngb = stod(exec("wmic os get TotalVirtualMemorySize | findstr /R /I /C:\"^[1-9].*\""))/1024/1024;
  #endif
  strs << ngb;
  return strs.str() + "GB";
}
string engi::mem_swap_free(){
  std::ostringstream strs;
  #ifdef __linux__
    double ngb = stod(exec("cat /proc/meminfo | grep SwapFree | grep -Eo '[0-9]{0,9}'"))/1024/1024;
  #elif _WIN32
    double ngb = stod(exec("wmic os get FreeVirtualMemory | findstr /R /I /C:\"^[1-9].*\""))/1024/1024;
  #endif
  strs << ngb;
  return strs.str() + "GB";
}
string engi::disk_list(){
  #ifdef __linux__
    string return_value = exec("lsblk -d -n -o NAME");
  #elif _WIN32
    string return_value = exec("wmic diskdrive get name,model");
  #endif

  return return_value;
}
string engi::partitions_list(){
  #ifdef __linux__
    string return_value = exec("lsblk -n -o NAME");
  #elif _WIN32
    string return_value = exec("wmic partition get name,type");
  #endif
  return return_value;
}
string engi::net_list(){
  #ifdef __linux__
    string return_value = exec("ip addr show | grep -o \"^[0-9]:*\\ .\\+:\"");
  #elif _WIN32
    string return_value = exec("netsh interface ip show interfaces");
  #endif
  return return_value;
}
string engi::net_list_ip(){
  #ifdef __linux__
    string interfaces = exec("ip addr show | grep -o \"^[0-9]:*\\ .\\+:\"");
    string ips = exec("ip addr show | grep -o \"inet [0-9]*\\.[0-9]*\\.[0-9]*\\.[0-9]*\" | grep -o \"[0-9]*\\.[0-9]*\\.[0-9]*\\.[0-9]*\"");
    string def_ip = "ninguna";
    int saltos = 0;
    int index = 0;
    int saltos_ip = 0;
    int index_ip = 0;

    for (int i = 0; i < interfaces.length(); i++)
      if(interfaces[i] == '\n')
        saltos++;

    string vec_int[saltos];
    for (int i = 0; i < saltos; i++)
      vec_int[i] = "";

    for (int i = 0; i < interfaces.length(); i++) {
      if(interfaces[i] == '\n')
        index++;
      else
        vec_int[index] += interfaces[i];
    }

    for (int i = 0; i < ips.length(); i++)
      if(ips[i] == '\n')
        saltos_ip++;

    string vec_ips[saltos_ip];
    for (int i = 0; i < saltos_ip; i++)
      vec_ips[i] = "";

    for (int i = 0; i < ips.length(); i++) {
      vec_ips[index_ip] += ips[i];
      if(ips[i] == '\n')
        index_ip++;
    }
    int pos = saltos_ip - 1;

    for(int i = saltos - 1; i >= 0 ; i--) {
      string str = (pos >= 0)?vec_ips[pos--]:def_ip;
      cout << vec_int[i] << " " << str;
    }
    return "";
  #elif _WIN32
    string return_value = exec("IPCONFIG | FINDSTR /R \"Adaptador* Dirección* .*[0-9][0-9]*\\.[0-9][0-9]*\\.[0-9][0-9]*\\.[0-9][0-9]*\"");
    return return_value;
  #endif
}
string engi::disk_space(){
  #ifdef __linux__
    string return_value = exec("df -h");
  #elif _WIN32
    string return_value = exec("wmic /node:\"%COMPUTERNAME%\" LogicalDisk Where DriveType=\"3\" Get DeviceID,FreeSpace");
  #endif
  return return_value;
}
string engi::current_user(){
  string return_value = exec("whoami");
  return return_value;
}
string engi::date_time(){
  string return_value;
  #ifdef __linux__
    return_value = exec("date");
  #elif _WIN32
    string day = exec("date /t");
    string hour = exec("time /t");
    return_value = day + hour;
  #endif
  return return_value;
}
string engi::uptime(){
  int index = 0;
  #ifdef __linux__
    string return_value = exec("uptime -p");
    index = return_value.find("hour", index);
    if(!(index == std::string::npos))
      return_value.replace(index, 5, "horas");
    index = 0;
    index = return_value.find("minutes", index);
    if(!(index == std::string::npos))
      return_value.replace(index, 7, "minutos");
    index = 0;
    index = return_value.find("up", index);
    if(!(index == std::string::npos))
      return_value.replace(index, 2, "");
  #elif _WIN32
    string return_value = exec("uptime");
    index = return_value.find("hour(s)", index);
    if(!(index == std::string::npos))
      return_value.replace(index, 7, "horas");
    index = 0;
    index = return_value.find("minute(s)", index);
    if(!(index == std::string::npos))
      return_value.replace(index, 9, "minutos");
    index = 0;
    index = return_value.find("second(s)", index);
    if(!(index == std::string::npos))
      return_value.replace(index, 9, "segundos");
    index = 0;
    index = return_value.find("day(s)", index);
    if(!(index == std::string::npos))
      return_value.replace(index, 6, "dias");
    index = 0;
    index = return_value.find("for:", index);
    if(!(index == std::string::npos))
      return_value.replace(0, index + 4, "");
  #endif

  index = 0;

  return return_value;
}

string engi::exec(const char* cmd) {
    char buffer[128];
    std::string result = "";
    std::shared_ptr<FILE> pipe(popen(cmd, "r"), pclose);
    if (!pipe) throw std::runtime_error("popen() failed!");
    while (!feof(pipe.get())) {
        if (fgets(buffer, 128, pipe.get()) != NULL)
            result += buffer;
    }
    return result;
}
