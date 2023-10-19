#pragma once

namespace Labs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Task2SolutionForm
	/// </summary>
	public ref class Task2SolutionForm : public System::Windows::Forms::Form
	{
	public:
		Task2SolutionForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Task2SolutionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ SourceDataGridView;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ ResultDataGridView;
	private: System::Windows::Forms::Button^ GoToTitleButton;
	private: System::Windows::Forms::Button^ CalculateButton;
	private: System::Windows::Forms::Label^ MaxPositiveLabel;
	private: System::Windows::Forms::Button^ CreateDbButton;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ RemovedArrayItemDataGridView;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ SortedArrayDataGridView;






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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Task2SolutionForm::typeid));
			this->SourceDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ResultDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->GoToTitleButton = (gcnew System::Windows::Forms::Button());
			this->CalculateButton = (gcnew System::Windows::Forms::Button());
			this->MaxPositiveLabel = (gcnew System::Windows::Forms::Label());
			this->CreateDbButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->RemovedArrayItemDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SortedArrayDataGridView = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SourceDataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultDataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RemovedArrayItemDataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SortedArrayDataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// SourceDataGridView
			// 
			this->SourceDataGridView->AllowUserToAddRows = false;
			this->SourceDataGridView->AllowUserToDeleteRows = false;
			this->SourceDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->SourceDataGridView->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->SourceDataGridView->BackgroundColor = System::Drawing::SystemColors::Control;
			this->SourceDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->SourceDataGridView->ColumnHeadersVisible = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->SourceDataGridView->DefaultCellStyle = dataGridViewCellStyle1;
			this->SourceDataGridView->Location = System::Drawing::Point(12, 27);
			this->SourceDataGridView->Name = L"SourceDataGridView";
			this->SourceDataGridView->ReadOnly = true;
			this->SourceDataGridView->RowHeadersVisible = false;
			this->SourceDataGridView->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->SourceDataGridView->Size = System::Drawing::Size(560, 65);
			this->SourceDataGridView->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 15);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Исходный массив:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Полученный массив:";
			// 
			// ResultDataGridView
			// 
			this->ResultDataGridView->AllowUserToAddRows = false;
			this->ResultDataGridView->AllowUserToDeleteRows = false;
			this->ResultDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->ResultDataGridView->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->ResultDataGridView->BackgroundColor = System::Drawing::SystemColors::Control;
			this->ResultDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ResultDataGridView->ColumnHeadersVisible = false;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->ResultDataGridView->DefaultCellStyle = dataGridViewCellStyle2;
			this->ResultDataGridView->Location = System::Drawing::Point(12, 113);
			this->ResultDataGridView->Name = L"ResultDataGridView";
			this->ResultDataGridView->ReadOnly = true;
			this->ResultDataGridView->RowHeadersVisible = false;
			this->ResultDataGridView->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->ResultDataGridView->Size = System::Drawing::Size(560, 65);
			this->ResultDataGridView->TabIndex = 2;
			// 
			// GoToTitleButton
			// 
			this->GoToTitleButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->GoToTitleButton->Location = System::Drawing::Point(12, 356);
			this->GoToTitleButton->Name = L"GoToTitleButton";
			this->GoToTitleButton->Size = System::Drawing::Size(100, 23);
			this->GoToTitleButton->TabIndex = 4;
			this->GoToTitleButton->Text = L"На главную";
			this->GoToTitleButton->UseVisualStyleBackColor = true;
			this->GoToTitleButton->Click += gcnew System::EventHandler(this, &Task2SolutionForm::GoToTitleButton_Click);
			// 
			// CalculateButton
			// 
			this->CalculateButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CalculateButton->Location = System::Drawing::Point(472, 356);
			this->CalculateButton->Name = L"CalculateButton";
			this->CalculateButton->Size = System::Drawing::Size(100, 23);
			this->CalculateButton->TabIndex = 5;
			this->CalculateButton->Text = L"Вычислить";
			this->CalculateButton->UseVisualStyleBackColor = true;
			this->CalculateButton->Click += gcnew System::EventHandler(this, &Task2SolutionForm::CalculateButton_Click);
			// 
			// MaxPositiveLabel
			// 
			this->MaxPositiveLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MaxPositiveLabel->Location = System::Drawing::Point(118, 356);
			this->MaxPositiveLabel->Name = L"MaxPositiveLabel";
			this->MaxPositiveLabel->Size = System::Drawing::Size(242, 23);
			this->MaxPositiveLabel->TabIndex = 6;
			this->MaxPositiveLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CreateDbButton
			// 
			this->CreateDbButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CreateDbButton->Location = System::Drawing::Point(366, 356);
			this->CreateDbButton->Name = L"CreateDbButton";
			this->CreateDbButton->Size = System::Drawing::Size(100, 23);
			this->CreateDbButton->TabIndex = 7;
			this->CreateDbButton->Text = L"Создать БД";
			this->CreateDbButton->UseVisualStyleBackColor = true;
			this->CreateDbButton->Click += gcnew System::EventHandler(this, &Task2SolutionForm::CreateDbButton_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 181);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(257, 15);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Исходный массив без выбранного элемента:";
			// 
			// RemovedArrayItemDataGridView
			// 
			this->RemovedArrayItemDataGridView->AllowUserToAddRows = false;
			this->RemovedArrayItemDataGridView->AllowUserToDeleteRows = false;
			this->RemovedArrayItemDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->RemovedArrayItemDataGridView->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->RemovedArrayItemDataGridView->BackgroundColor = System::Drawing::SystemColors::Control;
			this->RemovedArrayItemDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->RemovedArrayItemDataGridView->ColumnHeadersVisible = false;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->RemovedArrayItemDataGridView->DefaultCellStyle = dataGridViewCellStyle3;
			this->RemovedArrayItemDataGridView->Location = System::Drawing::Point(12, 199);
			this->RemovedArrayItemDataGridView->Name = L"RemovedArrayItemDataGridView";
			this->RemovedArrayItemDataGridView->ReadOnly = true;
			this->RemovedArrayItemDataGridView->RowHeadersVisible = false;
			this->RemovedArrayItemDataGridView->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->RemovedArrayItemDataGridView->Size = System::Drawing::Size(560, 65);
			this->RemovedArrayItemDataGridView->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 267);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(213, 15);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Исходный отсортированный массив:";
			// 
			// SortedArrayDataGridView
			// 
			this->SortedArrayDataGridView->AllowUserToAddRows = false;
			this->SortedArrayDataGridView->AllowUserToDeleteRows = false;
			this->SortedArrayDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->SortedArrayDataGridView->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->SortedArrayDataGridView->BackgroundColor = System::Drawing::SystemColors::Control;
			this->SortedArrayDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->SortedArrayDataGridView->ColumnHeadersVisible = false;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->SortedArrayDataGridView->DefaultCellStyle = dataGridViewCellStyle4;
			this->SortedArrayDataGridView->Location = System::Drawing::Point(12, 285);
			this->SortedArrayDataGridView->Name = L"SortedArrayDataGridView";
			this->SortedArrayDataGridView->ReadOnly = true;
			this->SortedArrayDataGridView->RowHeadersVisible = false;
			this->SortedArrayDataGridView->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->SortedArrayDataGridView->Size = System::Drawing::Size(560, 65);
			this->SortedArrayDataGridView->TabIndex = 10;
			// 
			// Task2SolutionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 391);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->SortedArrayDataGridView);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->RemovedArrayItemDataGridView);
			this->Controls->Add(this->CreateDbButton);
			this->Controls->Add(this->MaxPositiveLabel);
			this->Controls->Add(this->CalculateButton);
			this->Controls->Add(this->GoToTitleButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ResultDataGridView);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->SourceDataGridView);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->Name = L"Task2SolutionForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лабораторные работы №2–5: Решение";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Task2SolutionForm::Task2SolutionForm_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SourceDataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultDataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RemovedArrayItemDataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SortedArrayDataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
    private: System::Void GoToTitleButton_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void CalculateButton_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void Task2SolutionForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
	private: System::Void CreateDbButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
