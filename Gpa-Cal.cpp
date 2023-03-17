#include<iostream>
#include<iomanip>
using namespace std;



static float whiethage[8] ={ 20 , 20 , 20 , 40 , 00 , 00 , 00 , 00 }; 
const string names[8] = { "Quizes             " , "Assignments        " , "Mid-term           " , "Final              " , "Presentation       " , "Class-Participation" , "Lab                " , "Project            " };
float total = 0;
char opt;
int no, n, q_n, a_n;
float  Quiz = 0, Assignment = 0;

void Display();
void Disp1();
void Disp();

void Display()
{
	Disp1();
	Disp();
}

void Disp1 ()
{

     system("cls");
     
   cout<<"\t|-----------------------------------------------------------------|"<<endl
       <<"\t|            GPA Calculator in C++ By                             |"<<endl
       <<"\t|                                                                 |"<<endl
       <<"\t|                          Ahmad Ali Khan                         |"<<endl
       <<"\t|                                                                 |"<<endl
       <<"\t|        GitHub link : https://github.com/Ahmad-Ali-121           |"<<endl
	   <<"\t|                                                                 |"<<endl
       <<"\t|-----------------------------------------------------------------|"<<endl   
       <<"\t|              Name                     Marks                     |"<<endl;
   
   for ( int i=0; i<8 ; i++ )
   {
      cout<<"\t|           "<<names[i]<<"          "<<whiethage[i]<<" %                     "<<endl;
   }
   
   total = 0;
   
   for ( int i=0; i<8 ; i++)
   {
      total = total + whiethage[i];   	
   }
    
   cout<<"\t|-----------------------------------------------------------------|"<<endl
       <<"\t|   Total                               = "<<total<<" %"<<endl
       <<"\t|-----------------------------------------------------------------|"<<endl;
   
   if ( total < 100 || total > 100 )
   cout<<endl<<endl<<"Warning! Wheigtage is not 100% "<<endl;
   else
   cout<<endl<<endl<<"Wheigtage is 100% "<<endl;

    cout<<endl<<endl;

}

void Disp()
{


	    do{
    
            cout<<"Enter Credit hour of this course ( 3 or 4 ) = ";
            cin>>no;

        }while ( no != 3 && no != 4 );

        cout<<endl;
        
		if ( no == 3 )
        {
   	        n = 6;
        }
        else
        {
   	        n = 8;
        }


   	    for ( int i=0 ; i<n ; i++ )
   	    {
   	    	cout<<"Enter total wheigtage of "<<names[i]<<" = ";
   	    	cin>>whiethage[i];
		}

	   Disp1();
        
       cout<<endl<<endl;
       cout<<"Is this configuration correct ( Y for yes and any other key for no ) = ";
       cin>>opt;
       

       if ( opt != 'y' && opt != 'Y')
       {
       	 Display();
	   }
	   else
	   
	   cout<<endl;
	   

}

int main()
{

    do{
     	
        Display ();
    
    
    cout<<"\t|---------------------------------------------------------------------|"<<endl
        <<"\t|                   Enter the following details first                 |"<<endl
        <<"\t|---------------------------------------------------------------------|"<<endl
        <<"\t|                                                                     |"<<endl
        <<"\t|                                                                     |"<<endl
		<<"\t|  1 ->        Enter total quantity of Quizes = ";
    	cin>>q_n;
    cout<<"\t|---------------------------------------------------------------------|"<<endl;
    cout<<"\t|  2 ->        Enter total quantity of Assignments = ";
        cin>>a_n;

//------Quizes Variables

    	Quiz = whiethage[0] / q_n; 
    	
    	float quiz_total[q_n] = {};
    	float quiz_remain [q_n] = {};
    	
    	float quiz[q_n] = {};
    	float T_quiz[q_n] = {};
    	
    	float total1 = 0;

//------Assignments Variables

    	Assignment = whiethage[1] / a_n ; 
    	
    	float assi_total[q_n] = {};
    	float assi_remain [q_n] = {};
    	
    	float assi[q_n] = {};
    	float T_assi[q_n] = {};
    	
    	float total2 = 0;

//------Mids Variables

       float mids_total = 0;
       float mids_remain = 0;
       float mids = 0;
       float T_mids = 0;
       
       float total3 = 0;

//------Final Variables

       float final_total = 0;
       float final_remain = 0;
       float final = 0;
       float T_final = 0;
       
       float total4 = 0;

//------Presentation Variables

       float presen_total = 0;
       float presen_remain = 0;
       float presen = 0;
       float T_presen = 0;

       float total5 = 0;
        
//------Class-Participation Variables

       float cp_total = 0;
       float cp_remain = 0;
       float cp = 0;
       float T_cp = 0;
       
       float total6 = 0;

//------Lab Variables

       float lab_total = 0;
       float lab_remain = 0;
       float lab = 0;
       float T_lab = 0;
       
       float total7 = 0;

//------Project Variables

       float pj_total = 0;
       float pj_remain = 0;
       float pj = 0;
       float T_pj = 0;
       
	   float total8 = 0;
	    
//----------------------------------------QUIZ----------------------------------------------------    

        cout<<endl<<endl;
        
    	for ( int i=0 ; i<q_n ; i++ )
    	{
    		cout<<"Enter Total marks of Quiz no "<<i+1<<" = ";
    		cin>>quiz_total[i];
    		
    		cout<<"Enter obtained marks of Quiz no "<<i+1<<" = ";
    		cin>>quiz_remain[i];
    	    
    	    quiz[i] = ( ( quiz_remain[i] * 100 ) / quiz_total[i] );
    	    cout<<endl;
    	    
		}
		
		for ( int i=0 ; i<q_n ; i++ )
		{
			T_quiz[i] = ( ( Quiz * quiz[i] ) / 100 ) ;
			total1 = total1 + T_quiz[i];
		}
    	
    	
//----------------------------------------Assignment----------------------------------------------------    
	
     	cout<<endl<<endl;

    	for ( int i=0 ; i<a_n ; i++ )
    	{
    		cout<<"Enter Total marks of Assignment no "<<i+1<<" = ";
    		cin>>assi_total[i];
    		
    		cout<<"Enter obtained marks of Assignment no "<<i+1<<" = ";
    		cin>>assi_remain[i];
    	    
    	    assi[i] = ( ( assi_remain[i] * 100 ) / assi_total[i] );
    	    
    	    cout<<endl;
		}
		
		for ( int i=0 ; i<q_n ; i++ )
		{
			T_assi[i] = ( ( Assignment * assi[i] ) / 100 ) ;
		    total2 = total2 + T_assi[i];
		}
    	
//----------------------------------------MIDS----------------------------------------------------    
	
     	cout<<endl<<endl;

    		cout<<"Enter Total marks of Mids  = ";
    		cin>>mids_total;
    		
    		cout<<"Enter obtained marks of Mids = ";
    		cin>>mids_remain;
    	    
    	    mids = ( ( mids_remain * 100 ) / mids_total );
    	    
			T_mids = ( ( whiethage[2] * mids ) / 100 ) ;
	
            total3 = T_mids;
				
//----------------------------------------FINAL----------------------------------------------------    
	
     	cout<<endl<<endl;

    		cout<<"Enter Total marks of Final  = ";
    		cin>>final_total;
    		
    		cout<<"Enter obtained marks of Final = ";
    		cin>>final_remain;
    	    
    	    final = ( ( final_remain * 100 ) / final_total );
    	    
			T_final = ( ( whiethage[3] * final ) / 100 ) ;
			
			total4 = T_final;
	
//----------------------------------------PRESENTATION----------------------------------------------------    
	
     	cout<<endl<<endl;

    		cout<<"Enter Total marks of Presentation  = ";
    		cin>>presen_total;
    		
    		cout<<"Enter obtained marks of Presentation = ";
    		cin>>presen_remain;
    	    
    	    presen = ( ( presen_remain * 100 ) / presen_total );
    	    
			T_presen = ( ( whiethage[4] * presen ) / 100 ) ;
			
			if( presen_total == 0)
			total5 = 0;
			else
			total5 = T_presen;
			
			

//----------------------------------------CLASS-PARTICIPATION----------------------------------------------------    
	
     	cout<<endl<<endl;

    		cout<<"Enter Total marks of Class-Participation  = ";
    		cin>>cp_total;
    		
    		cout<<"Enter obtained marks of Class-Participation = ";
    		cin>>cp_remain;
    	    
    	    cp = ( ( cp_remain * 100 ) / cp_total );
    	    
			T_cp = ( ( whiethage[5] * cp ) / 100 ) ;

			if( cp_total == 0)
            total6 = 0;
			else
			total6 = T_cp;
     
     

//----------------------------------------LAB----------------------------------------------------    
	
	 if ( no == 4 )
        {

     	cout<<endl<<endl;

    		cout<<"Enter Total marks of Lab  = ";
    		cin>>lab_total;
    		
    		cout<<"Enter obtained marks of Lab = ";
    		cin>>lab_remain;
    	    
    	    lab = ( ( lab_remain * 100 ) / lab_total );
    	    
			T_lab = ( ( whiethage[6] * lab ) / 100 ) ;

			if( lab_total == 0)
            {
            lab_remain = 0;
			total7 = 0;
			lab = 0;
			T_lab = 0;
			}
			
			else
			total7 = T_lab;
			

//----------------------------------------PROJECT----------------------------------------------------    
	
     	cout<<endl<<endl;

    		cout<<"Enter Total marks of Project = ";
    		cin>>pj_total;
    		
    		cout<<"Enter obtained marks of Project = ";
    		cin>>pj_remain;
    	    
    	    pj = ( ( pj_remain * 100 ) / pj_total );
    	    
			T_pj = ( ( whiethage[7] * pj ) / 100 ) ;

			if( pj_total == 0)
			{
            pj = 0;
			pj_remain = 0;
			total8 = 0;
			T_pj = 0;
			}

			else
			total8 = T_pj;
			
	
        }
        
        
	system("cls");
	
	cout<<"|-------------------------------------------------------------------------------------------------------------------------------|"<<endl
	    <<"|        Name                      Total marks           Obtained Marks         Total weightage         Obtained weightage      |"<<endl
        <<"|-------------------------------------------------------------------------------------------------------------------------------|"<<endl;
        
        for( int i=0 ; i<q_n ; i++ )
        {
        cout<<"|             Quiz no "<<i+1<<"                 "<<quiz_total[i]<<"                     "<<quiz_remain[i]<<"                      "<<Quiz        <<" %                     "<<T_quiz[i]<<" %"<<endl;	
		}

        for( int i=0 ; i<a_n ; i++ )
        {
        cout<<"|       Assignment no "<<i+1<<"                 "<<assi_total[i]<<"                     "<<assi_remain[i]<<"                      "<<Assignment  <<" %                     "<<T_assi[i]<<" %"<<endl;	
		}

        cout<<"|                Mids                  "         <<mids_total   <<"                     "<<mids_remain   <<"                    "<<whiethage[2]<<" %                   "<<T_mids   <<" %"<<endl;	
        cout<<"|               Final                  "         <<final_total  <<"                     "<<final_remain  <<"                     "<<whiethage[3]<<" %                    "<<T_final  <<" %"<<endl;	
        cout<<"|        Presentation                  "         <<presen_total <<"                     "<<presen_remain <<"                      "<<whiethage[4]<<" %                    "<<T_presen <<" %"<<endl;	
        cout<<"| Class-Participation                  "         <<cp_total     <<"                     "<<cp_remain     <<"                      "<<whiethage[5]<<" %                    "<<T_cp     <<" %"<<endl;	
        cout<<"|                 Lab                  "         <<lab_total    <<"                      "<<lab_remain    <<"                      "<<whiethage[6]<<" %                     "<<T_lab    <<" %"<<endl;	
        cout<<"|             Project                  "         <<pj_total     <<"                      "<<pj_remain     <<"                      "<<whiethage[7]<<" %                     "<<T_pj     <<" %"<<endl;	
        
        total = total1 + total2 + total3 + total4 +total5 + total6 + total7 + total8 ;
	
	cout<<"|-------------------------------------------------------------------------------------------------------------------------------|"<<endl
	    <<"|                                        Total = "<<total<<" out of 100."<<endl
		<<"|-------------------------------------------------------------------------------------------------------------------------------|"<<endl; 
        
        
        cout<<endl<<endl<<"\tDo you want to run the program again? "<<endl
                        <<"\t( Y for yes and N for no ) = ";
            cin>>opt;
            
   } while ( opt == 'y' || opt == 'Y' );
    
	system("pause");    
        
   return 0;
}


