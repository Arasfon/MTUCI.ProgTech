#pragma once

namespace Labs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TitleForm
	/// </summary>
	public ref class TitleForm : public Form
	{
	public:
		TitleForm()
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TitleForm()
		{
			if (components)
                delete components;
        }
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ Task1Button;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ Task2Button;
	private: System::Windows::Forms::Label^ label6;


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
		void InitializeComponent()
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TitleForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Task1Button = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Task2Button = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(500, 75);
			this->label1->TabIndex = 0;
			this->label1->Text = resources->GetString(L"label1.Text");
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->Location = System::Drawing::Point(12, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(500, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Кафедра «Информатика»";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(500, 40);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Лабораторные работы";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->Location = System::Drawing::Point(12, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(500, 22);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Выполнил: Бояркин Е. В., БЭИ2202, Вариант 5";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->Location = System::Drawing::Point(12, 214);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(500, 19);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Проверил: к.п.н., доцент Гуриков С. Р.";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Task1Button
			// 
			this->Task1Button->Location = System::Drawing::Point(3, 3);
			this->Task1Button->Name = L"Task1Button";
			this->Task1Button->Size = System::Drawing::Size(244, 42);
			this->Task1Button->TabIndex = 5;
			this->Task1Button->Text = L"Лабораторная работа №1";
			this->Task1Button->UseVisualStyleBackColor = true;
			this->Task1Button->Click += gcnew System::EventHandler(this, &TitleForm::Task1Button_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->Task2Button, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->Task1Button, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 236);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(500, 48);
			this->tableLayoutPanel1->TabIndex = 6;
			// 
			// Task2Button
			// 
			this->Task2Button->Location = System::Drawing::Point(253, 3);
			this->Task2Button->Name = L"Task2Button";
			this->Task2Button->Size = System::Drawing::Size(244, 42);
			this->Task2Button->TabIndex = 6;
			this->Task2Button->Text = L"Лабораторные работы №2–4";
			this->Task2Button->UseVisualStyleBackColor = true;
			this->Task2Button->Click += gcnew System::EventHandler(this, &TitleForm::Task2Button_Click);
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 147);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(500, 45);
			this->label6->TabIndex = 7;
			this->label6->Text = L"по дисциплине\r\n«Технологии программирования»";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TitleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(524, 296);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->Name = L"TitleForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Технологии программирования";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TitleForm::TitleForm_FormClosed);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Task1Button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Task2Button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void TitleForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
    };
}
