/*
 * Copyright (c) 2018-2020 Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include <stratosphere.hpp>

namespace ams::erpt::srv {

    class SessionImpl final : public erpt::sf::ISession {
        public:
            virtual Result OpenReport(ams::sf::Out<std::shared_ptr<erpt::sf::IReport>> out) override final;
            virtual Result OpenManager(ams::sf::Out<std::shared_ptr<erpt::sf::IManager>> out) override final;
            virtual Result OpenAttachment(ams::sf::Out<std::shared_ptr<erpt::sf::IAttachment>> out) override final;
    };

}
