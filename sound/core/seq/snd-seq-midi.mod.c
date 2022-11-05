#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb8620ad8, "snd_midi_event_reset_decode" },
	{ 0x8150b379, "snd_midi_event_reset_encode" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0x734e4fba, "snd_midi_event_encode_byte" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xee3ebe68, "snd_rawmidi_kernel_release" },
	{ 0x5bc8635c, "snd_seq_create_kernel_client" },
	{ 0xe07ef029, "snd_rawmidi_kernel_open" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd70dbf6, "snd_midi_event_decode" },
	{ 0x94ac6478, "snd_rawmidi_input_params" },
	{ 0xe62c957a, "__snd_seq_driver_register" },
	{ 0xe9e6c50c, "snd_midi_event_new" },
	{ 0x7b8699eb, "snd_seq_event_port_detach" },
	{ 0xdcb764ad, "memset" },
	{ 0x875e21fa, "snd_rawmidi_drain_output" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdd935c83, "snd_midi_event_free" },
	{ 0xe46f6a47, "snd_rawmidi_kernel_write" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x12e6d193, "snd_rawmidi_kernel_read" },
	{ 0x92997ed8, "_printk" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xe934da1d, "snd_seq_dump_var_event" },
	{ 0xbc1b6700, "snd_rawmidi_output_params" },
	{ 0x37a0cba, "kfree" },
	{ 0x3fb4d161, "snd_seq_kernel_client_dispatch" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x67b3326e, "snd_seq_driver_unregister" },
	{ 0x205e62e4, "snd_rawmidi_info_select" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-seq-midi-event,snd-seq,snd-rawmidi,snd-seq-device");


MODULE_INFO(srcversion, "554069677A408D23FD8B8D6");
