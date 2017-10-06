/* XMRig
 * Copyright 2010      Jeff Garzik <jgarzik@pobox.com>
 * Copyright 2012-2014 pooler      <pooler@litecoinpool.org>
 * Copyright 2014      Lucas Jones <https://github.com/lucasjones>
 * Copyright 2014-2016 Wolf9466    <https://github.com/OhGodAPet>
 * Copyright 2016      Jay D Dee   <jayddee246@gmail.com>
 * Copyright 2016-2017 XMRig       <support@xmrig.com>
 *
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __SERVICE_H__
#define __SERVICE_H__


#include <string>
#include <uv.h>
#include <microhttpd.h>


//class ServiceState;
//class Hashrate;
//class NetworkState;


class Service
{
public:
    static bool start();
    static void release();

    static unsigned get(const char *url, std::string &resp);
    static unsigned post(const char *url, const std::string &data, std::string &resp);
//    static void tick(const Hashrate *hashrate);
//    static void tick(const NetworkState &results);

private:
    //static ServiceState *m_state;
    static char m_buf[4096];
    static uv_mutex_t m_mutex;
};

#endif /* __SERVICE_H__ */
