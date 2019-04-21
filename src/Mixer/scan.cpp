/*
 * Copyright (c) 2019 Doku Enterprise
 * Author: Friedrich Doku
 * -----
 * Last Modified: Friday April 19th 2019 6:32:07 am
 * -----
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 3 of the License, or
 *   (at your option) any later version.
 *   This program is distributed in the hope that it will be useful
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *   You should have received a copy of the GNU General Public License
 *   along with this program. If not, see <https://www.gnu.org/licenses/>.
 */


#include "scan.hpp"

std::vector<std::vector<std::string>> get_config_info(std::string filename){
    std::ifstream in(filename);
    if(in.fail()){
        std::cout << "Failed to open file" << std::endl;
    }
    std::string data; std::map<std::string,int> types;
    std::vector<std::vector<std::string>> myvec;
    types["MIXERS"] = 0;
    types["MAILBOXES"] = 1;
    types["PKGS"] = 2;
    int arr;
    while(in >> data){
        int tmp = types[data];
        if(tmp != 0){
            arr = tmp;
        }
        myvec[arr].push_back(data);
    }
}