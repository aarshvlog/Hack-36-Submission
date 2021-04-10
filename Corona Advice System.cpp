#include <iostream>
using namespace std;
class covidtest
{
public:
    int c1=0,c2=0,c3=0,c4=0,oxylevel=0;
    int common()
    {
        cout<<"Enter any Number if you have the following Symptoms"<<endl<<"Else Enter 0"<<endl;
        string s0="Headache";
        cout<<s0<<endl;
        int common1=0;
        cin>>common1;
        if(common1>0)
        {
            c1++;
        }
        string s1="Fever";
        cout<<s1<<endl;
        int common2=0;
        cin>>common2;
        if(common2>0)
        {
            c1++;
        }
        string s2="Dry Cough";
        cout<<s2<<endl;
        int common3=0;
        cin>>common3;
        if(common3>0)
        {
            c1++;
        }
        string s3="Tiredness";
        cout<<s3<<endl;
        int common4=0;
        cin>>common4;
        if(common4>0)
        {
            c1++;
        }
        return c1;
    }
    int  mild()
    {
        cout<<"Enter any Number if you have the following Symptoms"<<endl<<"Else Enter 0"<<endl;
        string s4="Body Pain";
        cout<<s4<<endl;
        int mild4=0;
        cin>>mild4;
        if(mild4>0)
        {
            c2++;
        }
        string s5="Sore Throat";
        cout<<s5<<endl;
        int mild5=0;
        cin>>mild5;
        if(mild5>0)
        {
            c2++;
        }
        string s6="Diarrhoea";
        cout<<s6<<endl;
        int mild6=0;
        cin>>mild6;
        if(mild6>0)
        {
            c2++;
        }
        string s7="conjunctivitis";
        cout<<s7<<endl;
        int mild7=0;
        cin>>mild7;
        if(mild7>0)
        {
            c2++;
        }
        string s8="Loss of Taste";
        cout<<s8<<endl;
        int mild8=0;
        cin>>mild8;
        if(mild8>0)
        {
            c2++;
        }
        string s9="Rashes and Other Skin problem";
        cout<<s9<<endl;
        int mild9=0;
        cin>>mild9;
        if(mild9>0)
        {
            c2++;
        }
        return c2;
    }
    int serious()
    {
        cout<<"Enter any Number if you have the following Symptoms"<<endl<<"Else Enter 0"<<endl;
        string s10="Difficulty in Breathing";
        cout<<s10<<endl;
        int serious10=0;
        cin>>serious10;
        if(serious10>0)
        {
            c3++;
        }
        string s11="Cheast Pain";
        cout<<s11<<endl;
        int serious11=0;
        cin>>serious11;
        if(serious11>0)
        {
            c3++;
        }
        string s12="Loss of Speech";
        cout<<s12<<endl;
        int serious12=0;
        cin>>serious12;
        if(serious12>0)
        {
            c3++;
        }
        string s13="Extreme Weakness";
        cout<<s13<<endl;
        int serious13=0;
        cin>>serious13;
        if(serious13>0)
        {
            c3++;
        }
        string s14="Change in Colour of Skin";
        cout<<s14<<endl;
        int serious14=0;
        cin>>serious14;
        if(serious14>0)
        {
            c3++;
        }
        return c3;
    }
    int oximetertest()
    {
        string s15="Remove Nail Paint if Present";
        cout<<s15<<endl;
        cout<<"Please Measure Your Blood Oxygen Level for Oximeter"<<endl;
        string s16="Enter the Index Finger of Dominant Hand";
        cout<<s16<<endl;
        cout<<"Enter the Oximeter Reading"<<endl;
        cin>>oxylevel;
        if(oxylevel<94)
        {
            return 1;
        }
        else
        {
        return 0;
        }
    }
};
int main()
{
    covidtest obj;
    int r1,r2,r3,r4;
    cout<<"Welcome to Early COVID  Warning System"<<endl;
    cout<<"Starting Pre Covid Test"<<endl;
    cout<<"Have You Been in Contact of a Corona Patient"<<endl;
    cout<<"enter any number  for Yes"<<endl<<"Or 0 for N0"<<endl;
    int contact;
    cin>>contact;
    if(contact!=0)
    {
        cout<<"Starting Phase 1:-"<<endl;
        r1=obj.common();
        cout<<"Starting Phase 2:-"<<endl;
        r2=obj.mild();
        cout<<"Starting Phase 3:-"<<endl;
        r3=obj.serious();
        cout<<"Starting Phase 4:-"<<endl;
        r4=obj.oximetertest();
        if(r3||r4!=0)
        {
            cout<<"Highly Risky"<<endl<<"Immediately Consult a Doctor/Hospitalization is Required"<<endl;
            return 0;
        }
        else if(r1||r2)
        {
            cout<<"Strict Iosaltion is Required"<<endl;
            return 0;
        }
	else
	    cout<<"You are healthy. Follow covid guidelines. Stay Safe, Stay Healthy"<<endl;
    }
    cout<<"Are You a Front Line Worker"<<endl;
    cout<<"enter any number  for Yes"<<endl<<"Or 0 for N0"<<endl;
    int frontline;
    cin>>frontline;
    if(frontline!=0)
    {
        cout<<"Starting Phase 1:-"<<endl;
        r1=obj.common();
        cout<<"Starting Phase 2:-"<<endl;
        r2=obj.mild();
        cout<<"Starting Phase 3:-"<<endl;
        r3=obj.serious();
        cout<<"Starting Phase 4:-"<<endl;
        r4=obj.oximetertest();
        if(r3||r4!=0)
        {
            cout<<"Highly Risky"<<endl<<"Immediately Consult a Doctor/Hospitalization is Required";
            return 0;
        }
        else if(r1||r2)
        {
            cout<<"Strict Iosaltion is Required";
            return 0;
        }
	else
	    cout<<"You are healthy. Follow covid guidelines. Stay Safe, Stay Healthy"<<endl;
    }
    cout<<"Are You an Old senior Citizen or under 10 years"<<endl;
    cout<<"example:-Above 50yrs or under 10 yrs"<<endl;
    int seniorcitizen;
    cin>>seniorcitizen;
    if(seniorcitizen!=0)
    {
        cout<<"Starting Phase 1:-"<<endl;
        r1=obj.common();
        cout<<"Starting Phase 2:-"<<endl;
        r2=obj.mild();
        cout<<"Starting Phase 3:-"<<endl;
        r3=obj.serious();
        cout<<"Starting Phase 4:-"<<endl;
        r4=obj.oximetertest();
        if(r3||r4!=0)
        {
            cout<<"Highly Risky"<<endl<<"Immediately Consult a Doctor/Hospitalization is Required";
            return 0;
        }
        else if(r1||r2)
        {
            cout<<"Strict Iosaltion is Required";
            return 0;
        }
	else
	    cout<<"You are healthy. Follow covid guidelines. Stay Safe, Stay Healthy"<<endl;
    }
    cout<<"If Your age is Between 10years and 50 years";
    cout<<"enter any number  for Yes"<<endl<<"Or 0 for N0"<<endl;
    int middleagers;
    cin>>middleagers;
    if(middleagers!=0)
    {
        cout<<"Starting Phase 1:-"<<endl;
        r1=obj.common();
        cout<<"Starting Phase 2:-"<<endl;
        r2=obj.mild();
        cout<<"Starting Phase 3:-"<<endl;
        r3=obj.serious();
        cout<<"Starting Phase 4:-"<<endl;
        r4=obj.oximetertest();
        if(r1||r2||r3||r4!=0)
        {
            cout<<"Strict Iosaltion is Required"<<endl;
            cout<<"If Problem become Severe with Decreasing Oxygen Level reachout for Proffesional Medical Aid"<<endl;
            return 0;
        }
	else
	    cout<<"You are healthy. Follow covid guidelines. Stay Safe, Stay Healthy"<<endl;
    }
}

