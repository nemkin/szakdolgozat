#pragma once

#ifndef __LOCATION__H__
#define __LOCATION__H__

#include <string>

namespace chronos {

class Location {

public:

    Location();

    Location(
        int p_id,
        std::string p_modified_timestamp,
        bool p_is_deleted,
        std::string p_name,
        double p_latitude,
        double p_longitude
    );

    int id() const;
    std::string modified_timestamp() const;
    bool is_deleted() const;
    std::string name() const;
    double latitude() const;
    double longitude() const;
    std::string to_string() const;

private:

    int _id;
    std::string _modified_timestamp;
    bool _is_deleted;
    std::string _name;
    double _latitude;
    double _longitude;

};

}

#endif //__LOCATION__H__

