#
# company.cmake
# Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
#
# EMF4CPP is free software: you can redistribute it and/or modify it
# under the terms of the GNU Lesser General Public License as published
# by the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# EMF4CPP is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# See the GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
#

set(CMAKE_CXX_FLAGS "")
set(CMAKE_CXX_FLAGS_DEBUG "-Wall -g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-Wall -O3 -funroll-loops")

set(company_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/company.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/company/CompanyPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/company/CompanyFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/company/CompanyPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/company/CompanyFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/company/Employee.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/company/EmployeeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/company/Department.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/company/DepartmentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/company/Company.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/company/CompanyImpl.cpp
   )
   
set(company_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/company.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/company_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/company/CompanyPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/company/CompanyFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/company/Employee.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/company/Department.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/company/Company.hpp
   )

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/company.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/company_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/company/CompanyFactory.hpp DESTINATION include/emf4cpp/company)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/company/CompanyPackage.hpp DESTINATION include/emf4cpp/company)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/company/Employee.hpp DESTINATION include/emf4cpp/company)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/company/Department.hpp DESTINATION include/emf4cpp/company)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/company/Company.hpp DESTINATION include/emf4cpp/company)
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../emf4cpp ../../emf4cpp)

add_library(emf4cpp-company SHARED ${company_HEADERS} ${company_SOURCES})
set_target_properties(emf4cpp-company PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-company DESTINATION lib)

