#include "FileHandler.h"

vector<shared_ptr<IShape>> FileHandler::read(string input, ParserFactory& factory)
{
	ifstream reader(input);
	cout << "Dang doc tap tin " << input << "..." << endl;
	
	vector<shared_ptr<IShape>> shapes;
	if (reader.good()) {
		string line;
		getline(reader, line);

		int count = stoi(line);

		for (int i = 0; i < count; i++) {
			getline(reader, line);
			stringstream buffer(line);

			string type;
			string data;
			getline(buffer, type, ':');
			getline(buffer, data);

			shared_ptr<IParser> parser = factory.select(type);
			if (parser != nullptr) {
				shared_ptr<IShape> shape = parser->parse(stringstream(data));
				if (shape != nullptr) {
					shapes.push_back(shape);
				}
			}
		}
		reader.close();

		cout << "Da tim thay " << shapes.size() << " hinh" << endl;
		PrintHandler::printShapeList(shapes);
	}
	return shapes;	
}
