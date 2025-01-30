#ifndef EDUCATIONALBOOK_HPP
#define EDUCATIONALBOOK_HPP

#include "Book.hpp"
#include <vector>

class EducationalBook: public Book {
	private:
		std::string course_name_;
		std::vector<int> group_indexes_;

	public:
		EducationalBook() = default;
		~EducationalBook() override = default;

		/**
			@brief Getter for course name
			@returns Name of the course
		*/
		std::string get_course_name() const;

		/**
			@brief Setter for course name
			@param[in] course_name Future name of the course (must be not an empty string)
			@throws std::invalid_argument If gotten string data is empty
		*/
		void set_course_name(const std::string& course_name);

		/**
			@brief Getter for group indexes
			@returns Vector of group indexes
		*/
		std::vector<int> get_group_indexes() const;

		/**
			@brief Setter for group indexes
			@param[in] group_indexes Future group indexes
		*/
		void set_group_indexes(std::vector<int> group_indexes);

		/**
			@brief Prints data into standart output thread
		*/
		void print() override;
};


#endif
