#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    cout<<endl;
    cout<<"                     Welcome To Ratio Calcultaion!          "<<endl;
    cout<<endl;
    cout<<endl;
    float a,b,c,d;
    int z;
    void current_ratio(float a,float b);
    void quick_ratio(float a,float b,float c);
    void inventory_turnover(float a,float b);
    void dso(float a,float b);
    void fixed(float a,float b);
    void total(float a,float b);
    void debt(float a,float b);
    void tim(float a,float b);
    void profit(float a, float b);
    void ret(float a,float b);
    void roe(float a,float b,float c);
    cout<<"Enter 1 For Current_reatio calculation: "<<endl;
    cout<<"Enter 2 For Quick_reatio calculation: "<<endl;
    cout<<"Enter 3 For Inventory turnover calculation: "<<endl;
    cout<<"Enter 4 For Days Sales Outstanding (DSO) Ratio: "<<endl;
    cout<<"Enter 5 For Fixed Asset Turnover Ratio: "<<endl;
    cout<<"Enter 6 For Total Asset Turnover Ratio: "<<endl;
    cout<<"Enter 7 For Debt Ratio: "<<endl;
    cout<<"Enter 8 For Times Interest Earned (TIE) Ratio: "<<endl;
    cout<<"Enter 9 For Net Profit Margin: "<<endl;
    cout<<"Enter 10 For Return on Total Assets (ROA): "<<endl; 
    cout<<"Enter 11 For Return on Equity (ROE): "<<endl;
    cout<<endl;

    cout<<"Enter: "<<endl;
    cin>>z;

    switch(z)
    {
        case 1:
        cout<<"Enter Current Asset & Current Liability: "<<endl;
        cin>>a>>b;
        current_ratio(a,b);
        break;

        case 2:
        cout<<"Enter For Quick ratio: "<<endl;
        cin>>a>>b>>c;
        quick_ratio(a,b,c);
        break;

        case 3:
        cout <<"Enter COGS & Inventory: "<<endl;
        cin>>a>>b;
        inventory_turnover(a,b);
        break;

        case 4:
        cout <<"Enter Accounts Receivables & Average Sales per day: "<<endl;
        cin>>a>>b;
        dso(a,b);
        break;

        case 5:
        cout<<"Enter Sales & Net Fixed assets: "<<endl;
        cin>>a>>b;
        fixed(a,b);
        break;

        case 6:
        cout<<"Enter Sales & Total Assets: "<<endl;
        cin>>a>>b;
        total(a,b);
        break;

        case 7:
        cout<<"Enter Total Debt/Liabilitie & Total Assets: "<<endl;
        cin>>a>>b;
        debt(a,b);
        break;

        case 8:
        cout<<"Enter EBIT & Interest Charge: "<<endl;
        cin>>a>>b;
        tim(a,b);
        break;

        case 9:
        cout<<"Enter Net Income & Sales: "<<endl;
        cin>>a>>b;
        profit(a,b);
        break;
        
        case 10:
        cout<<"Enter Net Income & Total Assets: "<<endl;
        cin>>a>>b;
        ret(a,b);
        break;

        case 11:
        cout<<"Enter Net Income, Preferred Dividends & Common Equity: "<<endl;
        cin>>a>>b>>c;
        roe(a,b,c);
    }

}

void current_ratio(float a,float b)
{
    float c;
    c = a/b;
    cout<<"Current ratio: "<<c<<endl;
}

void quick_ratio(float a,float b,float c)
{
    float q;

    q= (a-b)/c;
    cout<<"Quick ratio: "<<q<<endl;
}

void inventory_turnover(float a,float b)
{
    float i;

    i = a/b;
    cout<<"Inventory turnover: "<<i<<endl;
}
void dso(float a,float b)
{
    float D;

    D = a/(b/360);
    cout<<"Dso: "<<D<<" Days"<<endl;
}

void fixed(float a,float b)
{
    float F;

    F = a/b;
    cout <<"Fixed Assets Turn Over Ratio: "<<F<<endl;
}
void total(float a,float b)
{
    float t;
     t = a/b;
     cout <<"Total Assets Turn Over Ratio: "<<t<<endl;
}
void debt(float a,float b)
{
    float debt;
    debt = a/b;
    cout <<"Debt Ratio: "<<debt<<endl;
}
void tim(float a,float b)
{
    float tim;
    tim = a/b;
    cout<<"Times Interest Earned (TIE) Ratio: "<<tim<<endl;
}
void profit(float a, float b)
{
    float p;
    p = a/b;
    cout<<"Net Profit Margin: "<<p<<endl;
}
void ret(float a,float b)
{
    float r;
    r = a/b;
    cout<<"Return On Total Assets (ROA): "<<r<<endl;
}
void roe(float a,float b,float c)
{
    float r;
    r = (a-b)/c;
    cout<<"Return On Equity (ROE): "<<r<<endl;
}