#include <iostream>
#include <bits/stdc++.h>

class Fixed{

    Fixed();
    Fixed(Fixed const &other);
    Fixed& operator= (Fixed& const other);
    Fixed& operator> (Fixed& const other);
    Fixed& operator>=(Fixed& const other);
    Fixed& operator< (Fixed& const other);
    Fixed& operator<=(Fixed& const other);
    Fixed& operator++();
    Fixed& operator--();
    Fixed& --operator();
    Fixed&

    Fixed max(Fixed& a, Fixed& b);
    Fixed min(Fixed& a, Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);