#pragma once

namespace Labs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Task1AssignmentForm
	/// </summary>
	public ref class Task1AssignmentForm : public System::Windows::Forms::Form
	{
	public:
		Task1AssignmentForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Task1AssignmentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ GoToTitleButton;
	private: System::Windows::Forms::Button^ GoToSolutionButton;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Task1AssignmentForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->GoToTitleButton = (gcnew System::Windows::Forms::Button());
			this->GoToSolutionButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(510, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Задание лабораторной работы №1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->Location = System::Drawing::Point(12, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(510, 66);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Вычислить и вывести площадь пятиугольника, заданного прямоугольными\r\nкоординатами"
				L" своих вершин:\r\nA1(3; 2), A2(9; 6), A3(14; 2), A4(10; -3), A5(7; -2).\r\nИспользов"
				L"ать формулу площади треугольника:\r\n";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(15, 97);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(507, 76);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->Location = System::Drawing::Point(12, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(510, 39);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Назначение метода: Вычисление площади треугольника по заданным\r\nкоординатам его в"
				L"ершин: (x1; y1), (x2; y2), (x3; y3).\r\n";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// GoToTitleButton
			// 
			this->GoToTitleButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->GoToTitleButton->Location = System::Drawing::Point(12, 217);
			this->GoToTitleButton->Name = L"GoToTitleButton";
			this->GoToTitleButton->Size = System::Drawing::Size(100, 23);
			this->GoToTitleButton->TabIndex = 4;
			this->GoToTitleButton->Text = L"На главную";
			this->GoToTitleButton->UseVisualStyleBackColor = true;
			this->GoToTitleButton->Click += gcnew System::EventHandler(this, &Task1AssignmentForm::GoToTitleButton_Click);
			// 
			// GoToSolutionButton
			// 
			this->GoToSolutionButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->GoToSolutionButton->Location = System::Drawing::Point(422, 217);
			this->GoToSolutionButton->Name = L"GoToSolutionButton";
			this->GoToSolutionButton->Size = System::Drawing::Size(100, 23);
			this->GoToSolutionButton->TabIndex = 5;
			this->GoToSolutionButton->Text = L"К решению";
			this->GoToSolutionButton->UseVisualStyleBackColor = true;
			this->GoToSolutionButton->Click += gcnew System::EventHandler(this, &Task1AssignmentForm::GoToSolutionButton_Click);
			// 
			// Task1AssignmentForm
			// 
			this->AcceptButton = this->GoToSolutionButton;
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 252);
			this->Controls->Add(this->GoToSolutionButton);
			this->Controls->Add(this->GoToTitleButton);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->Name = L"Task1AssignmentForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лабораторная работа №1: Задание";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Task1AssignmentForm::Task1AssignmentForm_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GoToSolutionButton_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void GoToTitleButton_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void Task1AssignmentForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
    };
}
