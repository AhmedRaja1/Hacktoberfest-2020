import face_recognition

class KnownPersons:
    def __init__(self):
        self.known_face_encodings = []
        self.known_face_names = []
    def AddEncoding(self,Name):
        self.image = face_recognition.load_image_file(Name+".jpeg")
        self.encoding = face_recognition.face_encodings(self.image)[0]
        self.name = Name
        self.known_face_encodings.append(self.encoding)
        self.known_face_names.append(self.name)

KP = KnownPersons()

KP.AddEncoding("Shah Raza")

face_locations = []
face_encodings = []
face_names = []