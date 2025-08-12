
public class main {
	public static void main(String[] args) {
		
		Student s1 = new Student("철수", 20, 85);
		Student s2 = new Student("영희", 22, 92);
		
		s1.sayHello();
		s1.printScore();
		s2.sayHello();
		s2.printScore();
	}
}
