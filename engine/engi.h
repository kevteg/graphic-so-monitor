#ifndef  ENGI_H
#define  ENGI_H
#include <string>
#include <sstream>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <memory>
#include <stdexcept>

using namespace std;
class engi{
  public:
    engi(int argc, char *argv[]);
    string execute();
  private:
    string kernel_version();
    string running_processes();
    string mem_total();
    string mem_total_free();
    string mem_swap();
    string mem_swap_free();
    string disk_list();
    string partitions_list();
    string net_list();
    string net_list_ip();
    string disk_space();
    string current_user();
    string date_time();
    string uptime();
    string exec(const char* cmd);
    string error_message;
    bool error;
    string command;
    //TODO: Aqui van metodos que revisan todas las cosas
};

#endif
