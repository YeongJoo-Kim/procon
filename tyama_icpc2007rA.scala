//usr/bin/env scala $0 $@;exit

object Main{
	def main(args: Array[String]){
		val cin=new java.util.Scanner(System.in)
		var n=cin.nextInt()
		while(n>0){
			val k=cin.nextInt()
			val m=cin.nextInt()
			var r=0
			for(i<-1 until n)r=(r+k)%i
			println((r+m)%n+1)
			n=cin.nextInt()
		}
	}
}