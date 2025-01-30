#ifndef CODEBOOK_HPP
#define CODEBOOK_HPP

#include "../books/Book.hpp"

#include <memory>

class CodeBook final {
	private:
		int code_;
		std::shared_ptr<Book> book_ptr_;

	public:
		CodeBook() = default;
		~CodeBook() = default;	

		int get_code() const;

};

#endif
