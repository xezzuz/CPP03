/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:48:41 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/11 18:38:48 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class A {
	public:
		int		anInteger;

		A() {
			std::cout << "A::Constructor Called => [" << this << "][" << &anInteger << "]\n";
			anInteger = 0;
		}
		~A() {
			std::cout << "A::Destructor Called => [" << this << "]\n";
		}
		void	foo() {
			std::cout << "A::foo called => [" << this << "]\n";
			std::cout << "anInteger = " << anInteger << "\n";
		}
};

class B : virtual public A {
	public:
		B() {
			anInteger = 1;
			std::cout << "B::Constructor Called => [" << this << "][" << &anInteger << "]\n";
		}
		~B() {
			std::cout << "B::Destructor Called => [" << this << "]\n";
		}
		void	whoAmI() {
			std::cout << "I'm Class B\n";
		}
};

class C : virtual public A {
	public:
		C() {
			anInteger = 2;
			std::cout << "C::Constructor Called => [" << this << "][" << &anInteger << "]\n";
		}
		~C() {
			std::cout << "C::Destructor Called => [" << this << "]\n";
		}
		void	whoAmI() {
			std::cout << "I'm Class C\n";
		}
};

class D : public B, public C {
	public:
		D() {
			anInteger = 3;
			std::cout << "D::Constructor Called => [" << this << "][" << &anInteger << "]\n";
		}
		~D() {
			std::cout << "D::Destructor Called => [" << this << "]\n";
		}
		void	whoAmI() {
			std::cout << "I'm Class D\n";
		}
};

int main(void) {
	D object;

	object.foo();
	object.whoAmI();
}
