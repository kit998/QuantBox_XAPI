#ifndef _API_STRUCT_H_
#define _API_STRUCT_H_

#include "ApiDataType.h"
#include "ApiEnum.h"


struct PositionField
{

};

struct OrderField
{
	InstrumentIDType InstrumentID;
	ExchangeIDType	ExchangeID;
	OrderType Type;
	OrderSide Side;
	QtyType Qty;
	PriceType Price;
	OpenCloseType OpenClose;
	HedgeFlagType HedgeFlag;

	PriceType StopPx;
	TimeInForce TimeInForce;

	OrderStatus Status;
	ExecType ExecType;
	QtyType LeavesQty;
	QtyType CumQty;
	PriceType AvgPx;
	ErrorIDType ErrorID;
	ErrorMsgType Text;

	OrderIDType ID;
	OrderIDType OrderID;
	long DateTime;
	//// Ԥ���ֶΣ�֧��bool,int,long,double
	//double double1;
	//double double2;
	//// �Ƿ�Ҫ������չ���Ե�֧�֣�
	//void* ptr1;
	//// �Ƿ���Ҫ�ӵײ㴫�������Ϣ������˵OrderSysID
};

struct TradeField
{
	InstrumentIDType InstrumentID;
	ExchangeIDType	ExchangeID;

	OrderSide Side;
	QtyType Qty;
	PriceType Price;
	OpenCloseType OpenClose;
	HedgeFlagType HedgeFlag;
	MoneyType Commission;
	TimeType Time;
	OrderIDType ID;
	TradeIDType TradeID;
};

struct ServerInfoField
{
	int IsUsingUdp;
	int IsMulticast;
	int	TopicId;
	ResumeType	Resume;
	BrokerIDType	BrokerID;
	ProductInfoType	UserProductInfo;
	AuthCodeType	AuthCode;
	AddressType	Address;
};

// �û���Ϣ
struct UserInfoField
{
	///�û�����
	UserIDType	UserID;
	///����
	PasswordType	Password;
};


// ������Ϣ
struct ErrorField
{
	// �������
	ErrorIDType	ErrorID;
	// ������Ϣ
	ErrorMsgType	ErrorMsg;
};


// ��¼�ر�
struct RspUserLoginField
{
	///������
	DateType	TradingDay;
	// ʱ��
	TimeType	LoginTime;
	// �ỰID
	SessionIDType	SessionID;
	// �������
	ErrorIDType	ErrorID;
	// ������Ϣ
	ErrorMsgType	ErrorMsg;
};



///�������
struct DepthMarketDataField
{
	/////������
	//TThostFtdcDateType	TradingDay;
	/////����޸�ʱ��
	//TThostFtdcTimeType	UpdateTime;
	/////����޸ĺ���
	//TThostFtdcMillisecType	UpdateMillisec;
	/////ҵ������
	//TThostFtdcDateType	ActionDay;

	///������ʱ��
	DateTimeType		ExchangeTime;

	///Ψһ����
	SymbolType			Symbol;
	///��Լ����
	InstrumentIDType	InstrumentID;
	///����������
	ExchangeIDType	ExchangeID;

	///���¼�
	PriceType	LastPrice;
	///����
	VolumeType	Volume;
	///�ɽ����
	MoneyType	Turnover;
	///�ֲ���
	LargeVolumeType	OpenInterest;
	///���վ���
	PriceType	AveragePrice;


	///����
	PriceType	OpenPrice;
	///��߼�
	PriceType	HighestPrice;
	///��ͼ�
	PriceType	LowestPrice;
	///������
	PriceType	ClosePrice;
	///���ν����
	PriceType	SettlementPrice;

	///��ͣ���
	PriceType	UpperLimitPrice;
	///��ͣ���
	PriceType	LowerLimitPrice;
	///������
	PriceType	PreClosePrice;
	///�ϴν����
	PriceType	PreSettlementPrice;
	///��ֲ���
	LargeVolumeType	PreOpenInterest;


	///�����һ
	PriceType	BidPrice1;
	///������һ
	VolumeType	BidVolume1;
	///������һ
	PriceType	AskPrice1;
	///������һ
	VolumeType	AskVolume1;
	///����۶�
	PriceType	BidPrice2;
	///��������
	VolumeType	BidVolume2;
	///�����۶�
	PriceType	AskPrice2;
	///��������
	VolumeType	AskVolume2;
	///�������
	PriceType	BidPrice3;
	///��������
	VolumeType	BidVolume3;
	///��������
	PriceType	AskPrice3;
	///��������
	VolumeType	AskVolume3;
	///�������
	PriceType	BidPrice4;
	///��������
	VolumeType	BidVolume4;
	///��������
	PriceType	AskPrice4;
	///��������
	VolumeType	AskVolume4;
	///�������
	PriceType	BidPrice5;
	///��������
	VolumeType	BidVolume5;
	///��������
	PriceType	AskPrice5;
	///��������
	VolumeType	AskVolume5;
};



///���������̵�ѯ������
struct QuoteRequestField
{
	///������
	DateType	TradingDay;
	///��Լ����
	InstrumentIDType	InstrumentID;
	///����������
	ExchangeIDType	ExchangeID;
	///ѯ�۱��
	OrderIDType	QuoteID;
	///ѯ��ʱ��
	TimeType	QuoteTime;
};

///��Լ
struct InstrumentField
{
	///Ψһ����
	SymbolType			Symbol;
	///��Լ����
	InstrumentIDType	InstrumentID;
	///����������
	ExchangeIDType	ExchangeID;
	///��Լ����
	InstrumentNameType InstrumentName;

	///��Լ����
	InstrumentType		Type;
	///��Լ��������
	VolumeMultipleType	VolumeMultiple;
	///��С�䶯��λ
	PriceType	PriceTick;
	///������
	DateType	ExpireDate;
	///������Ʒ����
	InstrumentIDType	UnderlyingInstrID;
	///ִ�м�
	PriceType	StrikePrice;
	///��Ȩ����
	PutCall	OptionsType;
};

///�˺�
struct AccountField
{
	///�ϴν���׼����
	MoneyType	PreBalance;
	///��ǰ��֤���ܶ�
	MoneyType	CurrMargin;
	///������
	MoneyType	Commission;
	///ƽ��ӯ��
	MoneyType	CloseProfit;
	///�ֲ�ӯ��
	MoneyType	PositionProfit;
	///�ڻ�����׼����
	MoneyType	Balance;
	///�����ʽ�
	MoneyType	Available;
};

///�˺�
struct SettlementInfoField
{
	///������
	DateType	TradingDay;
	///��Ϣ����
	ContentType	Content;
};
#endif