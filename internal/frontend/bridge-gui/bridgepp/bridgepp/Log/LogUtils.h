// Copyright (c) 2023 Proton AG
//
// This file is part of Proton Mail Bridge.
//
// Proton Mail Bridge is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Proton Mail Bridge is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Proton Mail Bridge. If not, see <https://www.gnu.org/licenses/>.


#ifndef BRIDGE_PP_LOG_UTILS_H
#define BRIDGE_PP_LOG_UTILS_H


namespace bridgepp {


QString userLogsDir(); ///< Return the path of the user logs dir.
QByteArray tailOfLatestBridgeLog(); ///< Return the last bytes of the last bridge log.


} // namespace bridgepp


#endif //BRIDGE_PP_LOG_UTILS_H
