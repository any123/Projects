using System;
using play.Common;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;
//using System.Drawing;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

namespace play
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    /// 
   
    
    public class show
    {
        public int time_p
        {
            get;
            set;
        }
        public int err
        {
            get;
            set;
        }

        public int len
        {
            get;
            set;
        }
        

        public double spee
        {
            get;
            set;

        }
    }
    
    public sealed partial class MainPage : Page
    {
        string[] str_beg_1 = new string[] {
            ("abc"),("a"),("defghgh")
        };

        string[] str_beg_2 = new string[]{
            ("1235"),("w"),("658675")
        };

        string[] str_adv_3 = new string[]   { ("Avoid excess alochol for those 21 years and older only 4"),("nothing"),("if you are a minor,do not drink alcohol untill you are 21 years of age4"),("nothing b"),
 ("Please consult your doctor or physicians for optimal advice regarding the consumption of alcochol4"),
("nothing a"),
("Taking calcuim suppliments in conjunctions with your local doctors recommendation so that you dont get bone diseases4"),
("nothing c"), 
("Drink atleast six glasses of fresh water every day.All doctors will tell you this4"),
("nothing d"),
("this helps you detoxify and cleanse your system on a daily basis4"),
("nothing e"),
("If you can read the 'Dhammpapada' . Sayings of the Buddha You will learn a lot about kindness and compassion4"),
("nothing f"),
(" If you can, read 'Sermon on the Mount' given by Jesus in the Bible. You will learn a lot about kindness, compassion and love in this historical text4") 
    };
 
        string[] str_adv_2= new string[] {
("Hold the door for someone has their hands full. it is pretty easy4"),
("nothing a"),
("They will be truly glad they didnt have to drop thier things just to open the door4"),
("nothing b"),
("If someone gives you a nice gift, write a physical thank you letter4"),
("nothing c"),
("and put that into the mail.An actual thank you letter on paper means4"),
("nothing d"), 
("a lot more than just an email, evn in todays modern times4"),
("nothing e"),
("If you are having a meal with someone, please turn off your cell phone"),
("nothing f"),
("Unless you have a doctor on call, it is not polite to eat and still be wired4"),
 };
        string[] str_adv_1 = new string[] { 
("Call your mom atleast once a week and just tell her that I LOVE YOU4"),
("nothing a"),
("You dont need a resaon for this.Just do it.She will be very happy to receicve this call4"),
("nothing b"),
("Call Your dad atleast once a week and jut say, dad i love you.4"),
("nothing c"),
("Fathers also appreiate positive thoughts from their kids. That will make his day a great one4"),
("nothing d"),
("Sit in silence and appreciate the silence around you. Ask the unieverse4"),
("nothing e"),
("to grant other the same feeling of peace, securoty and tranquility4"),
("nothing f"),
("We get caught up in our day to day activities and forgetthe simple joy of something like feeding the birds.Birds always enjoy a fresh piece of bread4")

 };
       
        private double speed=0;
        private int popup_var = 0; 
       public int count = 0 ,j=0  ;
        private int adv_var = 0, stu_var = 0, beg_var = 0;
        private int adv_1 = 0, adv_2 = 0, avd_2 = 0;
        private int beg_1 = 0, beg_2 = 0, beg_3 = 0;
        private int stu_1 = 0, stu_2 = 0, stu_3 = 0;
        private static int  error=0,final_error=0;
        private int time_para=0;
        private int les_1 = 0, les_2 = 0, les_3 = 0, leng = 0;
     

        
        public MainPage()
        {
            this.InitializeComponent();


        }




        private void key_press(object sender, KeyRoutedEventArgs e)
        {

            //anybox.Text = String.Join(Environment.NewLine, mylist1);
            switch (e.Key)
            {
                case Windows.System.VirtualKey.A:

                    a_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.B:
                    b_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.C:
                    c_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.Space:
                    space_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.D:
                    d_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.E:
                    e_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.F:
                    f_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.G:
                    g_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.H:
                    h_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.I:
                    i_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.J:
                    j_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.K:
                    k_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.L:
                    l_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.M:
                    m_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.N:
                    n_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.O:
                    o_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.P:
                    p_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.Q:
                    q_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.R:
                    r_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.S:
                    s_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.T:
                    t_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.U:
                    u_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.V:
                    v_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.W:
                    w_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.X:
                    x_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.Y:
                    y_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;

                case Windows.System.VirtualKey.Z:
                    z_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Red);
                    break;
            }


            if (e.Key == Windows.System.VirtualKey.Enter)
            {
               
                
                if (count > 11)
                {
                    textblock.Text = "You have completed this round.\n Press RESULTS to check your score";
                    //Application.Current.Exit(); 

                }
                else if (count < 13)
                {
                    if (count > 0)
                    {
                        if(beg_var==1)
                        {
                            if (les_1 == 1)
                                textblock.Text = str_beg_1[count - 1];
                            else
                                if (les_2 == 1)
                                    textblock.Text = str_beg_2[count - 1];

                        }
                    
                       

                        if (stu_var == 1)
                            textblock.Text = str_adv_2[count - 1];

                        if (adv_var == 1)
                        {
                            if (les_1 == 1)
                                textblock.Text = str_adv_1[count - 1];
                            else
                                if (les_2 == 1)
                                    textblock.Text = str_adv_2[count - 1];
                                else
                                    if (les_3 == 1)
                                        textblock.Text = str_adv_3[count - 1];
                        }


                        
                    }
                  
                }
                count++;

              
                textbox.Text = "";

                    
                }
                
                
        
            if (e.Key == Windows.System.VirtualKey.Number4)
            {
                j = 0;

                char[] arr = textblock.Text.ToCharArray();
                char[] ichar = textbox.Text.ToCharArray();

                leng = leng + arr.Length;
                

                if (arr.Length == ichar.Length)
                {
                    for (int i = 0; i < arr.Length; i++)
                    {

                        if (arr[i] != ichar[j])
                        {
                            //mistakes = arr[i].ToString();
                            //mistakes = arr.ToString();
                            error++; j++;
                        }
                        else
                            j++;

                    }
                }

                else
                {
                    
                    error = Math.Abs(arr.Length - ichar.Length);
                    if(arr.Length>ichar.Length)
                    {
                        for (int i = 0; i < ichar.Length; i++)
                        {

                            if (arr[i] != ichar[j])
                            {
                                
                                error++; j++;
                            }
                            else
                                j++;

                        }
                    }
                    else
                        if(ichar.Length>arr.Length)
                        {
                            for (int i = 0; i < arr.Length; i++)
                            {

                                if (arr[i] != ichar[j])
                                {
                                  
                                    error++; j++;
                                }
                                else
                                    j++;

                            }
                        }
                }
                final_error = final_error + error;
                
                anybox.Text = "The string length is: " + leng + "\nthe errors are " + final_error;

                


                 
            }
            
            
        }

        private void key_up(object sender, KeyRoutedEventArgs e)
        {
            switch (e.Key)
            {
                case Windows.System.VirtualKey.A:
                    a_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.B:
                    b_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.C:
                    c_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.Space:
                    space_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;
                case Windows.System.VirtualKey.D:
                    d_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.E:
                    e_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.F:
                    f_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.G:
                    g_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.H:
                    h_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.I:
                    i_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.J:
                    j_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.K:
                    k_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.L:
                    l_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.M:
                    m_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.N:
                    n_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.O:
                    o_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.P:
                    p_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.Q:
                    q_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.R:
                    r_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.S:
                    s_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.T:
                    t_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.U:
                    u_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.V:
                    v_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.W:
                    w_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.X:
                    x_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.Y:
                    y_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

                case Windows.System.VirtualKey.Z:
                    z_but.Background.SetValue(SolidColorBrush.ColorProperty, Windows.UI.Colors.Black);
                    break;

            }
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {

            Application.Current.Exit();
        }

        private void show_results(object sender, RoutedEventArgs e)
        {


            time_para =  300- time_para ;

            speed = (leng/ time_para); 

            show s = new show() { spee = speed  ,len = leng ,time_p= time_para, err = error };
           this.Frame.Navigate(typeof(BasicPage1), s);

          
             les_1 = 0;
           les_2 = 0;
            les_3 = 0;
            count = 0; j = 0; adv_1 = 0; adv_2 = 0; adv_var = 0; leng = 0; stu_1 = 0; stu_2 = 0; stu_3 = 0; error = 0; final_error = 0;
            time_para = 0; beg_1 = 0; beg_2 = 0; beg_3 = 0; beg_var = 0;
            timesTicked = 300;
        }



        private void beginner(object sender, DoubleTappedRoutedEventArgs e)
        {
            textblock.Text = "You have selected Beginners level. Press START to begin !!!";
            beg_var = 1;
        }


       
        private void Student(object sender, DoubleTappedRoutedEventArgs e)
        {
            textblock.Text = "You have selected Student level. Press START to begin !!!";
            stu_var = 1;
        }
        private void Advance(object sender, DoubleTappedRoutedEventArgs e)
        {
            textblock.Text = "You have selected Advance level. Press START to begin !!!";
            adv_var = 1;
        }

        private void on_start_click(object sender, RoutedEventArgs e)
        {
            if (beg_var == 1)
                textblock.Text = "Now Phrase will come one by one,press Enter for next phrase.\nType as FAST AS YOU CAN\nPress enter to begin typing:";
            else
                if (stu_var == 1)
                    textblock.Text = "Now Phrase will come one by one,press Enter for next phrase.\nType as FAST AS YOU CAN\nPress enter to begin typing:";
                else
                    if (adv_var == 1)
                        textblock.Text = "Now Phrase will come one by one,press Enter for next phrase.\nType as FAST AS YOU CAN\nPress enter to begin typing:";
                    else
                        textblock.Text = "Please select the level first";

           
            textbox.Focus(Windows.UI.Xaml.FocusState.Programmatic);
            textbox.Text = "";
            
            if(beg_var == 1 || stu_var ==1 || adv_var ==1)
            DispatcherTimerSetup();
            else
                textblock.Text = "Please select the level first by double tapping and then hit START";
          
        }


         DispatcherTimer dispatcherTimer;
        int timesTicked = 300;
        int timesToTick = 1;
        public void DispatcherTimerSetup()
        {
            dispatcherTimer = new DispatcherTimer();
            dispatcherTimer.Tick += dispatcherTimer_Tick;
            dispatcherTimer.Interval = new TimeSpan(0, 0, 1);
            dispatcherTimer.Start();
          
        }
 
        
        void dispatcherTimer_Tick(object sender, object e)
        {          
            TimerLog.Text = timesTicked.ToString();
            if (timesTicked < timesToTick)
            {
                ppup.IsOpen = true;
                //    TimerStatus.Text = "Times up !!!\n";
                dispatcherTimer.Stop();
            }
            else
                TimerStatus.Text = "Time remanining:";


            timesTicked--;

            time_para =  timesTicked;
        }
       
        private void Page_Loaded_1(object sender, RoutedEventArgs e)
        {
            TimerStatus.Text = "dispatcherTimer.IsEnabled = False";
        }

        private void lesson_1(object sender, DoubleTappedRoutedEventArgs e)
        {
            les_1 = 1;
        }

        private void lesson_2(object sender, DoubleTappedRoutedEventArgs e)
        {
            les_2 = 1;
        }

        private void lesson_3(object sender, DoubleTappedRoutedEventArgs e)
        {
            les_3 = 1;
        }

         private void popup_button(object sender, RoutedEventArgs e)
        {
            ppup.IsOpen = true;

        }

         private void reset_button(object sender, RoutedEventArgs e)
         {
             ppup.IsOpen = false;
             les_1 = 0;    
             les_2 = 0;
             les_3 = 0;
             count = 0; j = 0; adv_1 = 0; adv_2 = 0; adv_var = 0; leng = 0; stu_1 = 0; stu_2 = 0; stu_3 = 0; error = 0; final_error = 0;
             time_para = 0; beg_1 = 0; beg_2 = 0; beg_3 = 0; beg_var = 0;
             timesTicked = 3;
             
         }

         
        
       
       
    }
}
