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

	public static String stringDecryption(String s)
	{
		String decryptedString = "";
		for (int i = 0; i < s.length(); i++) 
		{
			for (int j = 0; j < 26; j++) 
			{
				if (s.charAt(i) == normalChar[j])
				{
					decryptedString += codedChar[j];
					break;
				}
				if (s.charAt(i) < 'a' || s.charAt(i) > 'z')
				{
					decryptedString += s.charAt(i);
					break;
				}
			}
		}
		return decryptedString;
	}
	public static void main(String args[])
	{
		String str = "SEEMSEAOMEDSAMHL";
		System.out.println("Encrypted Msg: " + str);
		String decryptedString = stringDecryption(str.toLowerCase());
		System.out.println("Message: " + decryptedString);
	}
}
