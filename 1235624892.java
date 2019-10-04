import java.io.*;
import java.math.*;
import java.util.*;

class Codechef {

	public static void main(String[] args) throws java.lang.Exception {
		PrintWriter pr = new PrintWriter(System.out, true);
		Scanner sc=new Scanner(System.in);
		int t = sc.nextInt();
		String s[];
		long time[], tt, sum;
		int n, i, j;
		char[] temp;
		while (t-- != 0) {
			n = sc.nextInt();
			s = new String[n];
			time = new long[n];
			for (i = 0; i < n; i++)
				s[i] = sc.readLine();

			for (i = 0; i < n; i++) {
				for (j = 0; j < i; j++) {
					if (s[j].equals(s[i])) {
						time[i] = time[j] / 2;
						break;
					}
				}
				if (j == i) {
					temp = s[i].toCharArray();
					tt = 2 * temp.length;
					for (j = 1; j < temp.length; j++) {
						if ((((temp[j] == 'd' || temp[j] == 'f') && (temp[j - 1] == 'd' || temp[j - 1] == 'f')))
								|| ((temp[j] == 'j' || temp[j] == 'k') && (temp[j - 1] == 'j' || temp[j - 1] == 'k'))) {
							tt = tt + 2;
						}
					}
					time[i] = tt;
				}
			}
			sum = 0;
			for (i = 0; i < n; i++)
				sum = sum + time[i];
			pr.println(sum);
		}
	}
}