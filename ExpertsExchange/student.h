#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <ostream>
#include <boost/archive/binary_iarchive.hpp>
#include <boost/archive/binary_iarchive.hpp>

class student
{
private:
	int mId;
	std::string mName;
	double mGpa;
	friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive& ar, const unsigned int version)
	{
		ar& mId;
		ar& mName;
		ar& mGpa;
	}
public:
	student() = default;
	student(int, std::string const&, double);
	int id() const;
	std::string name() const;
	double gpa() const;
};

std::ostream& operator<<(std::ostream&, const student&);

#endif
