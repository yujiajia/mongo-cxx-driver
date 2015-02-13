// Copyright 2014 MongoDB Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <mongocxx/config/prelude.hpp>

#include <string>

#include <bsoncxx/stdx/optional.hpp>

namespace mongocxx {
MONGOCXX_INLINE_NAMESPACE_BEGIN
namespace options {

///
/// Class representing the optional arguments to a MongoDB driver client (SSL)
///
class MONGOCXX_API ssl {

   public:
    void pem_file(std::string pem_file);
    const bsoncxx::stdx::optional<std::string>& pem_file() const;

    void pem_password(std::string pem_password);
    const bsoncxx::stdx::optional<std::string>& pem_password() const;

    void ca_file(std::string ca_file);
    const bsoncxx::stdx::optional<std::string>& ca_file() const;

    void ca_dir(std::string ca_file);
    const bsoncxx::stdx::optional<std::string>& ca_dir() const;

    void weak_cert_validation(bool weak_cert_validation);
    const bsoncxx::stdx::optional<bool>& weak_cert_validation() const;

   private:
    bsoncxx::stdx::optional<std::string> _pem_file;
    bsoncxx::stdx::optional<std::string> _pem_password;
    bsoncxx::stdx::optional<std::string> _ca_file;
    bsoncxx::stdx::optional<std::string> _ca_dir;
    bsoncxx::stdx::optional<bool> _weak_cert_validation;

};

}  // namespace options
MONGOCXX_INLINE_NAMESPACE_END
}  // namespace mongocxx

#include <mongocxx/config/postlude.hpp>