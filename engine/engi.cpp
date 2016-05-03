#include "engi.h"
engi::engi(int argc, char *argv[]){
  error_message = "No existe ese comando";
  error = false;
  command = "";
  if(argc < 2){
    error = true;
    error_message = "Debe especificar un comando";
  }else
      command = argv[1];
}
string engi::execute(){
  string execution = "Error: " + error_message;
  if(command == "--kernel_version")
    execution = kernel_version();
  else if(command == "--running_processes")
    execution = running_processes();
  else if(command == "--mem_total")
    execution = mem_total();
  else if(command == "--mem_total_free")
    execution = mem_total_free();
  else if(command == "--disk_list")
    execution = disk_list();
  else if(command == "--partitions_list")
    execution = partitions_list();
  else if(command == "--net_list")
    execution = net_list();
  else if(command == "--net_list_ip")
    execution = net_list_ip();
  else if(command == "--disk_space")
    execution = disk_space();
  else if(command == "--current_user")
    execution = current_user();
  else if(command == "--date_time")
    execution = date_time();
  else if(command == "--uptime")
    execution = uptime();

  return execution;
}

string engi::kernel_version(){
  string return_value = exec("uname -r");
  return return_value;
}
string engi::running_processes(){
  string return_value = exec("ps -ax --no-headers | wc -l");
  return return_value;
}
string engi::mem_total(){
  string return_value = "mem total";
  return return_value;
}
string engi::mem_total_free(){
  string return_value = "mem total free";
  return return_value;
}
string engi::mem_swap(){
  string return_value = "mem swap";
  return return_value;
}
string engi::mem_swap_free(){
  string return_value = "mem swap free";
  return return_value;
}
string engi::disk_list(){
  string return_value = "disk list";
  return return_value;
}
string engi::partitions_list(){
  string return_value = "partitions list";
  return return_value;
}
string engi::net_list(){
  string return_value = "net list";
  return return_value;
}
string engi::net_list_ip(){
  string return_value = "net list ip";
  return return_value;
}
string engi::disk_space(){
  string return_value = "disk space";
  return return_value;
}
string engi::current_user(){
  string return_value = "current user";
  return return_value;
}
string engi::date_time(){
  string return_value = "date time";
  return return_value;
}
string engi::uptime(){
  string return_value = "uptime";
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
