#pragma once

namespace Labs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Task2AssignmentForm
	/// </summary>
	public ref class Task2AssignmentForm : public System::Windows::Forms::Form
	{
	public:
		Task2AssignmentForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Task2AssignmentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ GoToTitleButton;
	private: System::Windows::Forms::Button^ GoToSolutionButton;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Task2AssignmentForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->GoToTitleButton = (gcnew System::Windows::Forms::Button());
			this->GoToSolutionButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Location = System::Drawing::Point(12, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(560, 68);
			this->label1->TabIndex = 0;
			this->label1->Text = resources->GetString(L"label1.Text");
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->Location = System::Drawing::Point(12, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(560, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Задание лабораторной работы №2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// GoToTitleButton
			// 
			this->GoToTitleButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->GoToTitleButton->Location = System::Drawing::Point(12, 109);
			this->GoToTitleButton->Name = L"GoToTitleButton";
			this->GoToTitleButton->Size = System::Drawing::Size(100, 23);
			this->GoToTitleButton->TabIndex = 2;
			this->GoToTitleButton->Text = L"На главную";
			this->GoToTitleButton->UseVisualStyleBackColor = true;
			this->GoToTitleButton->Click += gcnew System::EventHandler(this, &Task2AssignmentForm::GoToTitleButton_Click);
			// 
			// GoToSolutionButton
			// 
			this->GoToSolutionButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->GoToSolutionButton->Location = System::Drawing::Point(472, 109);
			this->GoToSolutionButton->Name = L"GoToSolutionButton";
			this->GoToSolutionButton->Size = System::Drawing::Size(100, 23);
			this->GoToSolutionButton->TabIndex = 3;
			this->GoToSolutionButton->Text = L"К решению";
			this->GoToSolutionButton->UseVisualStyleBackColor = true;
			this->GoToSolutionButton->Click += gcnew System::EventHandler(this, &Task2AssignmentForm::GoToSolutionButton_Click);
			// 
			// Task2AssignmentForm
			// 
			this->AcceptButton = this->GoToSolutionButton;
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 144);
			this->Controls->Add(this->GoToSolutionButton);
			this->Controls->Add(this->GoToTitleButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->Name = L"Task2AssignmentForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лабораторная работа №2: Задание";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Task2AssignmentForm::Task2AssignmentForm_FormClosed);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GoToTitleButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void GoToSolutionButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Task2AssignmentForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
    };
}
