/******************************************************************************
 * Copyright (C) 2020 by Hassan El-shazly
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright.
 *
 *****************************************************************************/
/**
 *
 * @author Hassan El-shazly
 * @date Last Edit Aug-2020
 *
 */

#include <iostream>
#include <cmath>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <random>

#define n_equs 100
#define v_begin -5
#define v_end 5

using namespace std;

int main_rondom()
{
    ofstream file;
    ostringstream file_name ;
    file_name << "test_" <<  n_equs << ".txt" ;
    file.open(file_name.str());
    file << n_equs << "\n";
    float random ;
    for(int i = 0; i < n_equs; i++)
    {
        for(int j = 0; j < n_equs; j++)
        {
            random = (rand() % (v_end - v_begin)) + v_begin;
            if(random >= 0) file << "+" ;
            file << random << "x" << j+1 ;
        }
        random = (rand() % (v_end - v_begin)) + v_begin;
        file << "=" << random << "\n";
    }
    file << "solve" << "\n" ;
    file.close();
}