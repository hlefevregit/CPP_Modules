/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:35:38 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/14 16:24:52 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

void	PmergeMe::sortVector(std::vector<int> &array)
{
    mergeSort(array);
}

void	PmergeMe::sortDeque(std::deque<int> &array)
{
    mergeSort(array);
}

void    PmergeMe::merge(std::vector<int> &leftArray, std::vector<int> &rightArray, std::vector<int> &array)
{
    int leftSize = leftArray.size();
    int rightSize = array.size() - leftSize;
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < leftSize && j < rightSize)
    {
        if (leftArray[i] < rightArray[j])
            array[k++] = leftArray[i++];
        else
            array[k++] = rightArray[j++];
    }
    while (i < leftSize)
        array[k++] = leftArray[i++];
    while (j < rightSize)
        array[k++] = rightArray[j++];
}

void    PmergeMe::mergeSort(std::vector<int> &array)
{
    int size = array.size();
    if (size < 2)
        return;
    int mid = size / 2;
    std::vector<int> leftArray(mid);
    std::vector<int> rightArray(size - mid);

    for (int i = 0; i < mid; i++)
        leftArray[i] = array[i];
    for (int i = mid; i < size; i++)
        rightArray[i - mid] = array[i];
    mergeSort(leftArray);
    mergeSort(rightArray);
    merge(leftArray, rightArray, array);
}

void    PmergeMe::merge(std::deque<int> &leftArray, std::deque<int> &rightArray, std::deque<int> &array)
{
    int leftSize = leftArray.size();
    int rightSize = array.size() - leftSize;
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < leftSize && j < rightSize)
    {
        if (leftArray[i] < rightArray[j])
            array[k++] = leftArray[i++];
        else
            array[k++] = rightArray[j++];
    }
    while (i < leftSize)
        array[k++] = leftArray[i++];
    while (j < rightSize)
        array[k++] = rightArray[j++];
}

void    PmergeMe::mergeSort(std::deque<int> &array)
{
    int size = array.size();
    if (size < 2)
        return;
    int mid = size / 2;
    std::deque<int> leftArray(mid);
    std::deque<int> rightArray(size - mid);

    for (int i = 0; i < mid; i++)
        leftArray[i] = array[i];
    for (int i = mid; i < size; i++)
        rightArray[i - mid] = array[i];
    mergeSort(leftArray);
    mergeSort(rightArray);
    merge(leftArray, rightArray, array);
}