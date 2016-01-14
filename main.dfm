object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Kalkula'#269'ka'
  ClientHeight = 450
  ClientWidth = 547
  Color = 11069734
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 600
    Height = 80
    BevelOuter = bvNone
    Color = 15192421
    TabOrder = 2
    object Pole: TLabel
      Left = 330
      Top = 32
      Width = 15
      Height = 37
      Alignment = taRightJustify
      Caption = '0'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -27
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
    end
    object Postup: TLabel
      Left = 341
      Top = 9
      Width = 4
      Height = 17
      Alignment = taRightJustify
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -13
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 80
    Width = 267
    Height = 325
    BevelOuter = bvNone
    Color = 11577461
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    object nula: TButton
      Left = 0
      Top = 259
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = '0'
      TabOrder = 0
      OnClick = nulaClick
    end
    object jedna: TButton
      Tag = 1
      Left = 0
      Top = 194
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = '1'
      TabOrder = 1
      OnClick = jednaClick
    end
    object dva: TButton
      Tag = 2
      Left = 89
      Top = 194
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = '2'
      TabOrder = 2
      OnClick = dvaClick
    end
    object tri: TButton
      Tag = 3
      Left = 178
      Top = 194
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = '3'
      TabOrder = 3
      OnClick = triClick
    end
    object ctyri: TButton
      Tag = 4
      Left = 0
      Top = 129
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = '4'
      TabOrder = 4
      OnClick = ctyriClick
    end
    object sest: TButton
      Tag = 6
      Left = 178
      Top = 129
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = '6'
      TabOrder = 5
      OnClick = sestClick
    end
    object pet: TButton
      Tag = 5
      Left = 89
      Top = 129
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = '5'
      TabOrder = 6
      OnClick = petClick
    end
    object devet: TButton
      Tag = 9
      Left = 178
      Top = 64
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = '9'
      TabOrder = 7
      OnClick = devetClick
    end
    object osm: TButton
      Tag = 8
      Left = 89
      Top = 64
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = '8'
      TabOrder = 8
      OnClick = osmClick
    end
    object sedm: TButton
      Tag = 7
      Left = 0
      Top = 64
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = '7'
      TabOrder = 9
      OnClick = sedmClick
    end
    object vymazat: TButton
      Tag = 11
      Left = 178
      Top = 259
      Width = 89
      Height = 65
      Caption = 'C'
      TabOrder = 10
      OnClick = vymazatClick
    end
    object desetinna: TButton
      Tag = 10
      Left = 89
      Top = 259
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = '.'
      TabOrder = 11
      OnClick = desetinnaClick
    end
    object prevracena: TButton
      Tag = 14
      Left = 178
      Top = 0
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = '1/x'
      TabOrder = 12
      OnClick = prevracenaClick
    end
    object odmocnina: TButton
      Tag = 13
      Left = 89
      Top = 0
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = 'odm'
      TabOrder = 13
      OnClick = odmocninaClick
    end
    object mocnina: TButton
      Tag = 12
      Left = 0
      Top = 0
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = '^2'
      TabOrder = 14
      OnClick = mocninaClick
    end
  end
  object Panel3: TPanel
    Left = 267
    Top = 80
    Width = 89
    Height = 324
    BevelOuter = bvNone
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    object deleno: TButton
      Tag = 4
      Left = 0
      Top = 0
      Width = 89
      Height = 65
      Caption = #247
      TabOrder = 0
      OnClick = delenoClick
    end
    object krat: TButton
      Tag = 3
      Left = 0
      Top = 65
      Width = 89
      Height = 65
      Caption = #215
      TabOrder = 1
      OnClick = kratClick
    end
    object minus: TButton
      Tag = 2
      Left = 0
      Top = 129
      Width = 89
      Height = 65
      Caption = '-'
      TabOrder = 2
      OnClick = minusClick
    end
    object plus: TButton
      Tag = 1
      Left = 0
      Top = 194
      Width = 89
      Height = 65
      Caption = '+'
      TabOrder = 3
      OnClick = plusClick
    end
    object rovnase: TButton
      Left = 0
      Top = 259
      Width = 89
      Height = 65
      Caption = '='
      TabOrder = 4
      OnClick = rovnaseClick
    end
  end
  object konec: TButton
    Left = 0
    Top = 410
    Width = 110
    Height = 40
    Caption = 'Konec'
    TabOrder = 3
    OnClick = konecClick
  end
  object telesa: TButton
    Left = 123
    Top = 410
    Width = 110
    Height = 40
    Caption = 'T'#283'lesa'
    TabOrder = 4
    OnClick = telesaClick
  end
  object vedecka: TButton
    Left = 246
    Top = 410
    Width = 110
    Height = 40
    Caption = 'V'#283'deck'#225
    TabOrder = 5
    OnClick = vedeckaClick
  end
  object standart: TButton
    Left = 246
    Top = 411
    Width = 110
    Height = 40
    Caption = 'Standartn'#237
    TabOrder = 6
    Visible = False
    OnClick = standartClick
  end
  object Panel4: TPanel
    Left = 370
    Top = 80
    Width = 230
    Height = 259
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    object XnaY: TButton
      Tag = 2
      Left = 89
      Top = 194
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = 'x^y'
      TabOrder = 0
      OnClick = XnaYClick
    end
    object exp: TButton
      Tag = 5
      Left = 89
      Top = 129
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = '10^x'
      TabOrder = 1
      OnClick = expClick
    end
    object Xna3: TButton
      Tag = 4
      Left = 0
      Top = 129
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = 'x^3'
      TabOrder = 2
      OnClick = Xna3Click
    end
    object tg: TButton
      Tag = 7
      Left = 0
      Top = 64
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = 'tg'
      TabOrder = 3
      OnClick = tgClick
    end
    object pi: TButton
      Tag = 8
      Left = 89
      Top = 64
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = 'PI'
      TabOrder = 4
      OnClick = piClick
    end
    object sin: TButton
      Tag = 10
      Left = 0
      Top = 0
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = 'sin'
      TabOrder = 5
      OnClick = sinClick
    end
    object fact: TButton
      Left = 0
      Top = 194
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = 'x!'
      TabOrder = 6
      OnClick = factClick
    end
    object cos: TButton
      Tag = 8
      Left = 89
      Top = 0
      Width = 89
      Height = 65
      Cursor = crArrow
      Caption = 'cos'
      TabOrder = 7
      OnClick = cosClick
    end
  end
end
