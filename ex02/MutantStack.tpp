/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 15:51:37 by busseven          #+#    #+#             */
/*   Updated: 2026/09/07 15:59:18 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>

template <typename Container>
void tests(std::string str)
{
    std::cout << std::endl;
    std::cout << str << " TESTS" << std::endl;
    Container cont;
    cont.push_back(5);
    cont.push_back(17);
    std::cout << cont.back() << std::endl;
    cont.pop_back();
    std::cout << cont.size() << std::endl;

    cont.push_back(3);
    cont.push_back(5);
    cont.push_back(737);
    cont.push_back(0);

    Container::iterator it = cont.begin();
    Container::iterator ite = cont.end();

    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    Container ls(cont);
}