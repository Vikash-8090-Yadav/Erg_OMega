import java.util.Scanner;


class VideoStoreLauncher {

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        VideoStore a = new VideoStore();
        String ss = "";
        while(true)

        {
            System.out.println("1. Add Video");
            System.out.println("2. check Out Video");
            System.out.println("3. Return Video");
            System.out.println("4. Rating");
            System.out.println("5. Display");
            System.out.println("6. Exit");
            int choice = sc.nextInt();
            switch(choice)
            {
                case 1:
                    System.out.println("Enter number of movies : ");
                    int len = sc.nextInt();
                    for(int i = 0 ; i<len; i++)
                    {
                        System.out.print("Enter Movie name for movie " + (i+1) +

                                " :" );

                        ss = sc.next();
                        a.addVideo(ss);
                    }
                    break;
                case 2:
                    System.out.println("Enter Movie name to checkout : ");
                    ss = sc.next();
                    a.checkOut(ss);
                    break;
                case 3:
                    System.out.print("Enter Movie name to Return ");
                    ss = sc.next();
                    a.returnVideo(ss);
                    break;
                case 4:
                    System.out.println("Enter Movie name : ");
                    ss = sc.next();
                    System.out.println("Enter rating for " + ss + " : ");
                    double rr = sc.nextInt();
                    a.receiveRating(ss, rr);
                    break;
                case 5 :

                    a.listinventory();
                    break;
                case 6:
                    System.exit(0);
                    break;
                default : System.out.println("Wrong Choice !");
            }
        }
    }
}
class Video
{
    String title;
    boolean checked;
    int n;
    double rating;
    Video(String s)
    {
        rating = 0;
        n = 0;
        checked = true;
        title = s;
    }
    public void beingChecked()
    {
        checked = false;
    }
    public void beingReturned()

    {
        checked = true;
    }
    public void rate(double t)
    {
        n = n+1;
        rating = (rating*(n-1)+t)/n;
    }
}
class VideoStore
{
    Video ref[] = new Video[10];
    int l = 0;
    public void addVideo(String s)
    {
        ref[l] = new Video(s);
        l++;
    }
    public void checkOut(String s)
    {
        for(int i = 0; i<l; i++)
        {
            if(ref[i].title.equals(s))
            {
                ref[i].beingChecked();
                System.out.println(ref[i].title + " Movie has been Checked out ");

                break;
            }
        }
    }
    public void returnVideo(String s)
    {
        for(int i = 0; i<l; i++)
        {
            if(ref[i].title.equals(s))
            {
                ref[i].beingReturned();
                break;
            }

        }
    }
    public void receiveRating(String s, double r)
    {
        for(int i =0; i<l; i++)
        {
            if(ref[i].title.equals(s))
            {
                ref[i].rate(r);
                break;
            }
        }
    }
    public void listinventory()
    {
        if(l==0)
        {
            System.out.println("Inventory is empty ! ");
        }
        for(int i = 0; i<l; i++)
        {
            if(ref[i].checked==true)
            {
                System.out.println("Movie name : "+ref[i].title +

                        " and " + "rating " + ref[i].rating);

            }
        }
    }
}
