

# include<bits/stdc++.h>
using namespace std;
void hanoi(int diskSize, int source, int dest, int spare)
{
  
  if(diskSize == 0)
	{
		std::cout << "Move disk " << diskSize << " from peg " << source << " to peg " << dest << endl;
	}
	else
	{
		hanoi(diskSize - 1, source, spare, dest);

		//Move the remaining disk to the destination peg.
		std::cout << "Move disk "  << diskSize << " from peg " << source << " to peg " << dest << endl;

		//Move the disks we just moved to the spare back over to the dest peg.
		hanoi(diskSize - 1, spare, dest, source);
	}
}

int main()
{
  //Move all 3 disks from peg 0 to peg 1 using peg 2 as a temporary.
  // disksize=no. of disk
  hanoi(2, 0, 1, 2);
  return 0;
}
