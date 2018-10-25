#pragma once

#ifndef __DATABASE__H__
#define __DATABASE__H__

#include <string>
#include <vector>

#include <pqxx/pqxx>

#include "model/generated/entities/class.h"
#include "model/generated/entities/class_type.h"
#include "model/generated/entities/course.h"
#include "model/generated/entities/department.h"
#include "model/generated/entities/distance.h"
#include "model/generated/entities/faculty_member.h"
#include "model/generated/entities/grade.h"
#include "model/generated/entities/license.h"
#include "model/generated/entities/location.h"
#include "model/generated/entities/major.h"
#include "model/generated/entities/room.h"
#include "model/generated/entities/room_type.h"
#include "model/generated/entities/semester.h"
#include "model/generated/entities/semester_type.h"

namespace chronos {

class Database {

public:

    Database(
        std::string user,
        std::string pass,
        std::string host = "localhost,"
        std::string database = "chronos"
    );

    std::vector<Class> get_classes();
    std::vector<ClassType> get_class_types();
    std::vector<Course> get_courses();
    std::vector<Department> get_departments();
    std::vector<Distance> get_distances();
    std::vector<FacultyMember> get_faculty_members();
    std::vector<Grade> get_grades();
    std::vector<License> get_licenses();
    std::vector<Location> get_locations();
    std::vector<Major> get_majors();
    std::vector<Room> get_rooms();
    std::vector<RoomType> get_room_types();
    std::vector<Semester> get_semesters();
    std::vector<SemesterType> get_semester_types();

    void test();
    void init();
    void destroy();

private:

    pqxx::connection _db;
};

}

#endif //__DATABASE__H__
