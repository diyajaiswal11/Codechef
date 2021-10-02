/*

In the End, It does not even matter.

 you’re welcome

⊂_ヽ
　 ＼＼ 
　　 ＼( ͡° ͜ʖ ͡°)
　　　 >　⌒ヽ
　　　/ 　 ^ ＼
　　 /　　/　＼＼
　　 )　 )　　 ヽ_)
　　/　/
　 /　/
　(　(ヽ
　|　|  ＼
　| 丿 ＼ ⌒)
　| |　　) /
 ノ )　　Lﾉ
(_/

*/
import java.io.BufferedReader;
import  java.io.InputStreamReader;
class PNUM{	
	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuffer sf = new StringBuffer();
		short t = Short.parseShort(br.readLine());
		while(t-- != 0){
			String[] str = br.readLine().split("\\s");
			int n = Integer.parseInt(str[0]);
			int p = Integer.parseInt(str[2]);
			int[] arr = new int[n/2+2];
			int k=0;
			if(str[1].equals("even")){
				for (int i=1;i<=n ;i +=2 ) {
					arr[k++] = i;
				}
			}else{
				for (int i=2;i<=n ;i += 2 ) {
					arr[k++] = i;			
				}
			}
			sf.append(arr[p-1]+"\n");
		}
		System.out.print(sf);
	}
}
