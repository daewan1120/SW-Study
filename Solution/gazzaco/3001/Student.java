
public class Student {
	private String name;
	private int age;
	private int score;
	
	public Student(String name, int age, int score) {
		this.name = name;
		this.age = age;
		this.score = score;
	}
	
	public String getName() {
		return name;
	}
	public int getAge() {
		return age;
	}
	public int getScore() {
		return score;
	}
	public void setName(String name) {
		this.name = name;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public void setScore(int score) {
		this.score = score;
	}
	
	//
	
	public void sayHello() {
		System.out.printf("\"안녕하세요, 저는 %s이고, %d살 입니다.\"\n", name, age);
	}
	public void printScore() {
		System.out.printf("\"%s 학생의 점수는 %d점입니다.\"\n", name, score);
	}
}
