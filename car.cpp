class car {
public:
	car() : name(), cc(0),hp(0) {}
	car(string name,double cc,double hp) : name(name),cc(cc),hp(hp) {}

	string getgame() {
		return name;
	}
  
	void setname(string name_) {
		name = name_; 
	}

	double getkm() {
		return cc;
	}

	void setkm(double cc_) {
		cc = cc_;
	}

	double gethp() {
		return hp;
	}

	void sethp(double hp_) {
		hp = hp_;
	}

private:
	string name;
	double cc;
	double hp;
};