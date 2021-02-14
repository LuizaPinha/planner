-- phpMyAdmin SQL Dump
-- version 4.0.4.2
-- http://www.phpmyadmin.net
--
-- Máquina: localhost
-- Data de Criação: 14-Fev-2021 às 17:18
-- Versão do servidor: 5.6.13
-- versão do PHP: 5.4.17

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Base de Dados: `planner`
--
CREATE DATABASE IF NOT EXISTS `planner` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci;
USE `planner`;

-- --------------------------------------------------------

--
-- Estrutura da tabela `domingo`
--

CREATE TABLE IF NOT EXISTS `domingo` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tarefa` varchar(1000) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=24 ;

-- --------------------------------------------------------

--
-- Estrutura da tabela `importante`
--

CREATE TABLE IF NOT EXISTS `importante` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tarefa` varchar(1000) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=4 ;

-- --------------------------------------------------------

--
-- Estrutura da tabela `metas`
--

CREATE TABLE IF NOT EXISTS `metas` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tarefa` varchar(1000) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=5 ;

-- --------------------------------------------------------

--
-- Estrutura da tabela `quarta`
--

CREATE TABLE IF NOT EXISTS `quarta` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tarefa` varchar(1000) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=2 ;

-- --------------------------------------------------------

--
-- Estrutura da tabela `quinta`
--

CREATE TABLE IF NOT EXISTS `quinta` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tarefa` varchar(1000) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=2 ;

-- --------------------------------------------------------

--
-- Estrutura da tabela `sabado`
--

CREATE TABLE IF NOT EXISTS `sabado` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tarefa` varchar(1000) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=2 ;

-- --------------------------------------------------------

--
-- Estrutura da tabela `segunda`
--

CREATE TABLE IF NOT EXISTS `segunda` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tarefa` varchar(1000) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=3 ;

-- --------------------------------------------------------

--
-- Estrutura da tabela `sexta`
--

CREATE TABLE IF NOT EXISTS `sexta` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tarefa` varchar(1000) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=2 ;

-- --------------------------------------------------------

--
-- Estrutura da tabela `terca`
--

CREATE TABLE IF NOT EXISTS `terca` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tarefa` varchar(1000) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=2 ;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
