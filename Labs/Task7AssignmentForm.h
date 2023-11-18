#pragma once

namespace Labs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Task7AssignmentForm
	/// </summary>
	public ref class Task7AssignmentForm : public System::Windows::Forms::Form
	{
	public:
		Task7AssignmentForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Task7AssignmentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ GoToSolutionButton;
	protected:
	private: System::Windows::Forms::Button^ GoToTitleButton;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Task7AssignmentForm::typeid));
			this->GoToSolutionButton = (gcnew System::Windows::Forms::Button());
			this->GoToTitleButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// GoToSolutionButton
			// 
			this->GoToSolutionButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->GoToSolutionButton->Location = System::Drawing::Point(459, 142);
			this->GoToSolutionButton->Name = L"GoToSolutionButton";
			this->GoToSolutionButton->Size = System::Drawing::Size(100, 23);
			this->GoToSolutionButton->TabIndex = 7;
			this->GoToSolutionButton->Text = L"К решению";
			this->GoToSolutionButton->UseVisualStyleBackColor = true;
			this->GoToSolutionButton->Click += gcnew System::EventHandler(this, &Task7AssignmentForm::GoToSolutionButton_Click);
			// 
			// GoToTitleButton
			// 
			this->GoToTitleButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->GoToTitleButton->Location = System::Drawing::Point(12, 142);
			this->GoToTitleButton->Name = L"GoToTitleButton";
			this->GoToTitleButton->Size = System::Drawing::Size(100, 23);
			this->GoToTitleButton->TabIndex = 6;
			this->GoToTitleButton->Text = L"На главную";
			this->GoToTitleButton->UseVisualStyleBackColor = true;
			this->GoToTitleButton->Click += gcnew System::EventHandler(this, &Task7AssignmentForm::GoToTitleButton_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->Location = System::Drawing::Point(12, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(547, 111);
			this->label2->TabIndex = 9;
			this->label2->Text = resources->GetString(L"label2.Text");
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(547, 19);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Задание лабораторной работы №7";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Task7AssignmentForm
			// 
			this->AcceptButton = this->GoToSolutionButton;
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(571, 177);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->GoToSolutionButton);
			this->Controls->Add(this->GoToTitleButton);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->Name = L"Task7AssignmentForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лабораторная работа №7: задание";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Task7AssignmentForm::Task7AssignmentForm_FormClosed);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GoToTitleButton_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void GoToSolutionButton_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void Task7AssignmentForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
};
}
