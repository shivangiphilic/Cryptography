import java.io.*;
class Main {
	public static char normalChar[]
		= { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
			'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
			's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

	public static char codedChar[]
		= { 'A', 'N', 'D', 'R', 'E', 'W', 'I', 'C', 
		     'K', 'S', 'O', 'H', 'T', 'B', 'F', 'G', 
		     'J', 'L', 'M', 'P', 'Q', 'U', 'V', 'X', 'Y', 'Z' };

	public static String stringEncryption(String s)
	{
		String encryptedString = "";
		for (int i = 0; i < s.length(); i++) 
		{
			for (int j = 0; j < 26; j++) 
			{
				if (s.charAt(i) == normalChar[j])
				{
					encryptedString += codedChar[j];
					break;
				}
				if (s.charAt(i) < 'a' || s.charAt(i) > 'z')
				{
					encryptedString += s.charAt(i);
					break;
				}
			}
		}
		return encryptedString;
	}
	public static void main(String args[])
	{
		String str = "wewishtoreplaceplayer";
		System.out.println("Plain text: " + str);
		String encryptedString = stringEncryption(str.toLowerCase());
		System.out.println("Encrypted message: " + encryptedString);
	}
}
