import pyttsx3
import wikipedia
import speech_recognition as sr
import webbrowser
import os
import smtplib

engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[0].id)

def speak(audio):
    engine.say(audio)
    engine.runAndWait()

speak('hi i am  sharma ')

# '''
def takeCommand():

    r = sr.Recognizer()
    
    with sr.Microphone() == source:
        print('listening...')
        r.pause_threshold = 1
        audio = r.listen(source)
    try:
        print("Recognizing...")
        que = r.recognize_google(audio,language ='en-in')
        print(f'User said {que}\n')

    except  Exception as e:
        print("say that again please...")
        return "None"
    return que


if __name__ == "__main__":

    while True:
        que = takeCommand().lower()
    
    if 'wikipedia' in que:
        speak("searching wikipedia...")
        que = query.replace("wikipedia", "")
        results = wikipedia.summary(que, sentences=2)
        speak("According to Wikipedia")
        print(results)
        speak(results) 
    
    elif 'open youtube' in query:
        webbrowser.open("youtube.com")

    elif 'open google' in que:
        webbrowser.open("google.com")

    elif 'play music' in que:
        music = ''
        song = os.listdir(music)     
        print(songs)
        os.startfile(os.path.join(music,songs[0]))    
        # use random choose the songs

    elif 'open code' in que:
        code_path = "C:\\Users\\LENOVO\\AppData\\Local\\Programs\\Microsoft VS Cod"
        os.startfile(code_path)

    elif 'open explorer' or 'explorer' in que:
        explorer_path = "C:\\Users\\LENOVO\\Desktop\\.exe"
        os.startfile(explorer_path)
    
    elif 'open account' or 'account' in que:
        folder1_path = ""
        os.startfile(folder1_path)
# '''