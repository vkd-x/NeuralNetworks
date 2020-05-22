/*
   This repository follows the vidoe series done by Sentdex 
   Creating Neural Networks from scratch

   3. Dot Product
*/

#include <iostream>
#include <vector>

using std::vector;

/*
 * Gives dot product, not done any sanity checks! Assume vector of equal sizes
 * [in] weights
 * [in] inputs
 * [out] outputs
 */
vector<double> dotProduct(vector<vector<double>> weights, vector<double> inputs)
{
	std::vector<double> outputs;
	outputs.clear();
	int counter = 0;
	for(const auto& elem : weights)
	{
		counter = 0;
		double op = 0;
		for(const auto& input : inputs)
		{
			op += elem[counter] * input;
			++counter;
		}
		outputs.push_back(op);
	}

	return outputs;
}

/*Assumed vector of same size, not added sanity checks
 *[in] vec1
 *[in] vec2
 *[out] output - Element-wise sum of vec
 */
vector<double> add(const vector<double>& vec1, const vector<double>& vec2)
{
	vector<double> output(vec1.size());
	output.clear();
	for(size_t i = 0; i < vec1.size(); ++i)
	{
		output.push_back(vec1[i] + vec2[i]);
	}

	return output;
}

int main()
{
	vector<double> inputs = {1.0, 2.0, 3.0, 2.5};
	vector<vector<double>> weights = {{0.2, 0.8, -0.5, 1.0},
		{0.5, -0.91, 0.26, -0.5},
		{-0.26, -0.27, 0.17, 0.87}};
	vector<double> biases = {2.0, 3.0, 0.5};

	vector<double> output = add(dotProduct(weights, inputs), biases);

	std::cout << "["
		<< output[0] << ", "
		<< output[1] << ", "
		<< output[2] 
		<< "]"<< std::endl;
}
