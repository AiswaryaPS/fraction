/**
 * @file fraction.cpp
 * @author Aiswarya PS
 * @brief 
 * @version 0.1
 * @date 2021-02-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include"fraction.h"
/**
 * @brief Construct a new Fraction:: Fraction object
 * 
 */
Fraction::Fraction():a_numerator(1),b_denominator(1)
{
/**
 * @brief 
 * 
 */
}
Fraction::Fraction(int numer,int deno):a_numerator(num),a_denominator(den)
{

}
/**
 * @brief Construct a new Fraction:: Fraction object
 * 
 * @param val 
 */
 Fraction::Fraction(int val):a_numerator(val),a_denominator(val)
 {

 }
 Fraction Fraction::operator+(const Fraction& ref)
 /**
  * @brief Fraction operator overloading
  * 
  */
 {
  return Fraction((this->a_numerator*ref.a_denominator)+(this>a_denominator*ref.a_numerator),
  
  this->a_denominator*ref.a_denominator);
  }
  Fraction Fraction::operator-(const Fraction&)
  {
      /**
       * @brief param
       * 
       */
  return Fraction((this->a_numerator*ref.a_denominator)-(this>a_denominator*ref.a_numerator),
  
  this->a_denominator*ref.a_denominator);
  
  Fraction Fraction::operator*(const Fraction&);
  
  Fraction Fraction::operator+(int val)
  {
  return Fraction(this->a_numerator+(val*this->a_denominator),
  this->a_denominator);
  }
  Fraction Fraction::operator-(int val)
  {
  return Fraction(this->a_numerator-(val*this->a_denominator),this->a_denominator);

  bool Fraction::operator==(const Fraction& ref)
  {
  return(a_numerator==ref.a_numerator)&&(a_denominator==ref.a_denominator);
  }
  /**
   * @brief 
   * 
   * @param ref 
   * @return true 
   * @return false 
   */
  bool Fraction::operator<(const Fraction& ref)
  {
  return(m_numerator/m_denominator)<(ref.a_numerator/ref.a_denominator);

  bool Fraction::operator>(const Fraction& ref)
  {
  return(m_numerator/a_denominator)>(ref.a_numerator/ref.a_denominator);
  }
  Fraction Fraction::simplify()
  {
  for(int i=a_numerator/1;i>1;i--)
  {
  if((a_numerator%i==0)&&(a_denominator%i==0))
    {
    a_numerator/=i;
    a_denominator/=i;
    }

   }
   return Fraction(a_numerator,a_denominator);
  }
  /**
   * @brief 
   * 
   * @return true 
   * @return false 
   */
  bool Fraction::isSimplest() const
  {
   return(a_denominator%a_numerator!=0);
   }
   /**
    * @brief 
    * 
    */
  void Fraction::dispay() const{
  std::cout<<a_numerator<<"/"<<a_denominator<<"\n";
  }
  std::ostream& operator<<(std::ostream&, const Fraction& ref)
  {
  return cout<<ref.a_numerator<<"/"<<ref.a_denominator;
  }
  
  
