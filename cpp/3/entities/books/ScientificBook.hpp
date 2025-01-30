#ifndef SCIENTIFICBOOK_HPP
#define SCIENTIFICBOOK_HPP

#include "Book.hpp"
#include <vector>

class ScientificBook: public Book {
	private:
		std::vector<std::string> course_names_;

	public:
		ScientificBook() = default;
		~ScientificBook() override = default;

		/**
			@brief Getter for course names
			@returns The vector of strings, which contains course names in book data
		*/
		std::vector<std::string> get_course_names() const;

		/**
			@brief Setter for course namse
			@param[in] course_names Future course names (must be not an empty vector, empty strings are forbidden)
			@throws std::invalid_argument If vector of strings data is empty
			@throws std::invalid_argument If vector of strings data collects at least one empty string
		*/
		void set_course_names(std::vector<std::string> course_names);

		/**
			@brief Prints data about book in standart output thread
		*/
		void print() override;		
};

#endif
