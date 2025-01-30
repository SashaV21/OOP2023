#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

class Book {
	protected:
		std::string author_info_;
		std::string publication_title_;
		std::string year_and_publisher_;
		int number_of_copies_;

	public:
		Book() = default;
		virtual ~Book() = default;

		/**
			@brief Getter for inforamtion book's author
			@returns Author information 
		*/
		std::string get_author_info() const;

		/**
			@brief Getter for publication title
			@returns The title of publication
		*/
		std::string get_publication_title() const;

		/**
			@brief Getter for year and publisher
			@returns The year and the publisher of book
		*/
		std::string get_year_and_publisher() const;

		/**
			@breif Getter for number of copies
			@return Number of copies of this book
		*/
		int get_number_of_copies() const;

		/**
			@brief Setter for information about author
			@param[in] author_info Future information about author (must be not an empty string)
			@throws std::invalid_argument If gotten string data has not any data inside
		*/
		void set_author_info(const std::string& author_info);

		/**
			@brief Setter for publication title
			@param[in] publication title Future publication title (must be not an empty string)
			@throws std::invalid_argument If gotten string data has not any data inside
		*/		
		void set_publication_title(const std::string& publication_title);

		/**
			@brief Setter for year and publisher
			@param[in] year_and_publisher Future information about year and publisher (must be not an empty string)
			@throws std::invalid_argument If gotten string data has not any data inside
		*/
		void set_year_and_publisher(const std::string& year_and_publisher);

		/**
			@brief Setter for number of copies
			@param[in] number_of_copies Future information about number of copies of this book (must be more than zero)
			@throws std::invalid_argument If gotten integer data is less than 1.
		*/
		void set_number_of_copies(int number_of_copies);

		/**
			@brief Prints data about this book in standart output thread
		*/
		virtual void print();
};

#endif
