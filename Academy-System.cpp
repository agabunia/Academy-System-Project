#include <iostream>
using namespace std;



class AbstractStudent {
    protected:
        string StudentName;
        string StudentSurname;
        int StudentAge;
        string LearningSubject;
    
    public:
        AbstractStudent(string StudentName, string StudentSurname, int StudentAge, string LearningSubject){
            this -> StudentName = StudentName;
            this -> StudentSurname = StudentSurname;
            this -> StudentAge = StudentAge;
            this -> LearningSubject = LearningSubject;
        }; 

        // Setter and Getter for Student Name
        void setStudentName(string StudentName){
            this -> StudentName = StudentName;
        };

        string getStudentName(){
            return StudentName;
        };


        // Setter and Getter for Student Surname
        void setStudentSurname(string StudentSurname){
            this -> StudentSurname = StudentSurname;
        };

        string getStudentSurname(){
            return StudentSurname;
        };


        // Setter and Getter for Student Age
        void setStudentAge(int StudentAge){
            this -> StudentAge = StudentAge;
        };

        int getStudentAge(){
            return StudentAge;
        };


        // Setter and Getter for Student learning subject
        void setStudentField(string LearningSubject){
            this -> LearningSubject = LearningSubject;
        };

        string getStudentField(){
            return LearningSubject;
        };

        // virtual class declaring
        virtual void getStudentInformation() = 0;
};


class skillWillStudent: public AbstractStudent {
    protected:
        string Section;
        string Course;
        int QuizMark;
        int CumulativeMark = 0;

    public:
        skillWillStudent (string StudentName, string StudentSurname, int StudentAge, string LearningSubject): AbstractStudent(StudentName, StudentSurname, StudentAge, LearningSubject){
            this -> StudentName = StudentName;
            this -> StudentSurname = StudentSurname;
            this -> StudentAge = StudentAge;
            this -> LearningSubject = LearningSubject;
        };


        // Setter and Getter for Student Section
        void setStudentSection(string Section){
            this -> Section = Section;
        };

        string getStudentSection(){
            return Section;
        };


        // Setter and Getter for Student Course
        void setStudentCourse(string Course){
            this -> Course = Course;
        };

        string getStudentCourse(){
            return Course;
        };


        // Method for updating the student's monthly mark
        int updateQuizMark(string StudentName, string StudentSurname, int QuizMark){
            this -> StudentName = StudentName;
            this -> StudentSurname = StudentSurname;
            this -> QuizMark = QuizMark;
            
            CumulativeMark += QuizMark;

            return CumulativeMark;
        };


        int getStudentMark(){
            return CumulativeMark;
        };


        // Virtual method from abstract class to get information about student
        void getStudentInformation(){
            cout << "Name: " << StudentName << endl;
            cout << "Surname: " << StudentSurname << endl;
            cout << "Age: " << StudentAge << endl;
            cout << "Field: " << LearningSubject << endl;
        };     
};


class AbstractSubject{
    protected:
        string Name;
        int Duration;
        string StartingDate;
    
    public:
        AbstractSubject(string Name, int Duration, string StartingDate){
            this->Name = Name;
            this->Duration = Duration;
            this->StartingDate = StartingDate;
        }
    
        string getSubjectName(){
            return Name;
        }
    
        void setSubjectName(string Name){
            this->Name = Name;
        }
    
        int getSubjectDurtion(){
            return Duration;
        }
    
        void setSubjectDuration(int Duration){
            this->Duration = Duration;
        }
    
        string getSubjectStartingDate(){
            return StartingDate;
        }
    
        void setSubjectStartingDate(string StartingDate){
            this->StartingDate = StartingDate;
        }


        virtual void getSubjectInfo() = 0;

        void isAttending() {
            cout << "The student is attending the lection" << endl;
        };
};


class SkillWillSubject: public AbstractSubject{
    private:
        string LastLecture;

    public:
        SkillWillSubject(string Name, int Duration, string StartingDate, string LastLecture): AbstractSubject(Name, Duration, StartingDate){
            this-> LastLecture = LastLecture;
        }

        // Last Lecture setter and getter
        string getLastLecture(){
            return LastLecture;
        }
        
        void setLastLecture(string LastLecture){
            this-> LastLecture = LastLecture;
        }


        void getSubjectInfo(){
            cout << "Subject Name: " << Name << endl;
            cout << "Subject Duration: " << Duration << endl;
            cout << "Subject Starting Date: " << StartingDate << endl;
            cout << "Last Lecture Subject: " << LastLecture << endl;
        }


        void isAttending(skillWillStudent StudentObjName){
            cout << "The Student: " << StudentObjName.getStudentName() << " " << StudentObjName.getStudentSurname() << "from field " <<
            StudentObjName.getStudentField() << " is attending the " 
            << getSubjectName() << endl;
        };
};


class AbstractLecturer {
    // atributes for abstract lecturer
    protected:      
        string LecturerName;
        string LecturerSurname;
        string LecturerSubject;
    

    // method for lecturer giving a lecture 
    public:
        void lecturerIsAttanding (){
            cout << "lecturer is giving a lecture" << endl;
        };
        
        
        // getter and setter methods for lecturer name atribute
        string getLecturerName (){
            return LecturerName;
        };

        void setLecturerName (string LecturerName){
            this->LecturerName = LecturerName;
        };
        

        // getter and setter methods for lecturer surname atribute    
        string getLecturerSurname (){
            return LecturerSurname;
        };

        void setLecturerSurname (string LecturerSurname){
            this->LecturerSurname = LecturerSurname;
        };
        

        // getter and setter methods for lecturer subject atribute    
        string getLecturerSubject (){
            return LecturerSubject;
        };

        void setLecturerSubject (string LecturerSubject){
            this->LecturerSubject = LecturerSubject;
        };        
        
        
        //Constructor for Abstract Lecturer 
        AbstractLecturer (string LecturerName,string LecturerSurname, string LecturerSubject){
            this->LecturerName = LecturerName;
            this->LecturerSurname = LecturerSurname;
            this->LecturerSubject = LecturerSubject;
        };

        // declaring virtual method for abstr class
        virtual void SkillWillLecturerInfo () = 0;
};


class SkillWillLecturer: public AbstractLecturer {
    private:
        int Chapter;
        int Level;
        
    public:
    // constructor for SkillWillLecturer
    // 
    SkillWillLecturer (string LecturerName, string LecturerSurname, string LecturerSubject, int Chapter, int Level): AbstractLecturer (LecturerName, LecturerSurname, LecturerSubject){
        this->Chapter = Chapter;
        this->Level = Level;
    };

    void SkillWillLecturerInfo(){
        cout << "Lecturer's name is: " << LecturerName << endl;
        cout << "Lecturer's surname is: " << LecturerSurname << endl;
        cout << "Lecturer is teaching: " << LecturerSubject << endl; 
    }   


    void lecturerIsAttanding (SkillWillSubject subjectObjClass, SkillWillSubject subjectObjDate) {
        cout << "Class: " << subjectObjClass.getSubjectName() << " for the date " << subjectObjDate.getSubjectStartingDate() << " is lecturing "
        << LecturerName << " " << LecturerSurname << endl;
    };
};




int main() {
    skillWillStudent student1("Sandro", "Gabunia", 24, "Front-End Development");
    student1.setStudentSection("C Section");
    student1.setStudentCourse("React.JS");
    student1.getStudentInformation();
    cout << "Section: " << student1.getStudentSection() << endl;
    cout << "Course: " << student1.getStudentCourse() << endl;

    cout << "After first month the mark is: " << student1.updateQuizMark(student1.getStudentName(), student1.getStudentSurname(), 20) << endl;
    cout << "After second month the mark is: " << student1.updateQuizMark(student1.getStudentName(), student1.getStudentSurname(), 90) << endl;
    cout << student1.getStudentMark() << endl;

    
    skillWillStudent student2("Giorgi", "giorgadze", 18, "QA Testing");
    student2.setStudentSection("B Section");
    student2.setStudentCourse("Python");

    student2.getStudentInformation();
    

    SkillWillSubject Subject1("Web Dev", 14, "2022-12-01", "OOP");
    Subject1.getSubjectInfo();

    SkillWillLecturer Gvantsa("Gvantsa", "Brachveli", "WhoKnnows", 4, 3);
    Gvantsa.SkillWillLecturerInfo();

    Gvantsa.lecturerIsAttanding(Subject1, Subject1);

    SkillWillSubject Subject2("Python", 14, "2023-01-01", "OOP");
    SkillWillLecturer Nodo("Nodo", "Gvari", "asdasd", 6, 3);
    Nodo.lecturerIsAttanding(Subject2, Subject2);

    Subject1.isAttending(student1);

    return 0;
}