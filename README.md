
<h1 align="center">
  <br>
  EncryptMe
  <br>
</h1>

<h4 align="center">A Minimal ShellCode Encrypter That Shows The Use Case Of Static Evasion, Please Do Understand This Is To Show & To Not Be Used During Real Engagements, As It Is Not For Real World Use Cases & Can Be Easily Decrypted</h4>

![screenshot](https://user-images.githubusercontent.com/126181603/221255032-71f5c05b-ebb5-42b7-9a41-89cdeaa338b8.PNG)

## Inner Workings

* Reads A Binary File
  - Checks If It Is A Binary Which Ends In .bin and not anything else
* Makes Sure The Binary Is Not Empty (NULL)
  - If It Is Null It Will End The Program & Then Print A Statement
* Takes And Reads The Shellcode Into A Buffer  
* Allocates A New Buffer, Encrypts Byte By Byte & Assigns It To A New Buffer
* Prints The Encrypted Shellcode and returns the pointer to that unsigned char* buffer.
* Allocate A New Piece Of Memory, Copy Encrypted Buffer There
* Decrypt And Print The Encrypted Buffer

## How To Use

To clone and run this application, you'll need to do the following:

```bash
# Clone this repository
$ git clone https://github.com/x64Reaper/EncryptMe.git

# Go into the repository
$ Compile The Project

# Use Case
$ EncryptMe.exe <file path to binary> <key>
$ Example: EncryptMe.exe C:\Desktop\HelloWorld.bin 69

```

## Static Evasion Write Up



## Support
<p>Follow Me On Twitter:</p>
<a href="https://twitter.com/x64Reaper" target="_blank"><img src="https://play-lh.googleusercontent.com/wIf3HtczQDjHzHuu7vezhqNs0zXAG85F7VmP7nhsTxO3OHegrVXlqIh_DWBYi86FTIGk" alt="Buy Me A Coffee" style="height: 111px !important;width: 174px !important;box-shadow: 0px 3px 2px 0px rgba(190, 190, 190, 0.5) !important;-webkit-box-shadow: 0px 3px 2px 0px rgba(190, 190, 190, 0.5) !important;" ></a>

<p>Or Read My Published Work:</p> 

<a href="https://dev.x64reaper.com/x64reaper/development/home">
	<img src="https://cdn.britannica.com/73/191073-050-BCEB0132/reaper-death.jpg" width="160">
</a>

