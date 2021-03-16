#ifndef GUEST_H
#define GUEST_H

class Guest
{
  public:
	Guest(string,bool=false);
	~Guest();
	bool getPremium();
	string getName();
	void addPts(int);
	void print();
  private:
  	string name;
  	bool premium;
  	int pts;
};

#endif
