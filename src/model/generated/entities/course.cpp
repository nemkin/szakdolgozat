#include "course.h"

#include <sstream>

using namespace chronos;

Course::Course(
) :
    _id(0),
    _modified_timestamp(""),
    _is_deleted(false),
    _name(""),
    _grade_id(0) {

}

Course::Course(
    int p_id,
    std::string p_modified_timestamp,
    bool p_is_deleted,
    std::string p_name,
    int p_grade_id
) :
    _id(p_id),
    _modified_timestamp(p_modified_timestamp),
    _is_deleted(p_is_deleted),
    _name(p_name),
    _grade_id(p_grade_id) {

}

int Course::id() const {

    return _id;
}

std::string Course::modified_timestamp() const {

    return _modified_timestamp;
}

bool Course::is_deleted() const {

    return _is_deleted;
}

std::string Course::name() const {

    return _name;
}

int Course::grade_id() const {

    return _grade_id;
}

std::string Course::to_string() const {

    std::stringstream ss;

    ss << "course              "                        << std::endl;
    ss << "id:                 " << _id                 << std::endl;
    ss << "modified_timestamp: " << _modified_timestamp << std::endl;
    ss << "is_deleted:         " << _is_deleted         << std::endl;
    ss << "name:               " << _name               << std::endl;
    ss << "grade_id:           " << _grade_id           << std::endl;

    return ss.str();
}

