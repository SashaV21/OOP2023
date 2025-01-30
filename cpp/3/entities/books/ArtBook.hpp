#ifndef ARTBOOK_HPP
#define ARTBOOK_HPP

#include "Book.hpp"

class ArtBook: public Book {
	private:
		std::string theme_;

	public:
		ArtBook() = default;
		~ArtBook() override = default;	

		/**
			@brief Getter for art book's theme
			@return Theme of art book
		*/
		std::string get_theme() const;

		/**
			@brief Setter for art book's theme
			@param[in] theme Future theme of art book (must be not an empty string)
			@throws std::invalid_argument If gotten string data is empty
		*/
		void set_theme(const std::string& theme);

		/**
			@brif Prints data about book is standart output thread
		*/
		void print() override;		
};

#endif
