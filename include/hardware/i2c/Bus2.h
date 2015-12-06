class HWBUS2 : public IOI2C {
public:
	HWBUS2(KKernel * k);
protected:
	virtual bool Read(u8 &data, u8 device, bool end, bool& noack);
	virtual bool Write(u8 &data, u8 device, bool end, bool& noack);
private:
	u32 m_register;
	bool m_active;
};